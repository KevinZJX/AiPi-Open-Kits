#include <stdint.h>
#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

#include <lwip/sockets.h>
#include <lwip/opt.h>
#include <lwip/sys.h>
#include <lwip/api.h>

#include "iperf.h"


void iperf_server(void *param)
{
    struct netconn *conn, *newconn;
    err_t err;
    void *recv_data;
    struct netbuf *buf;
    u16_t len;

    recv_data = (void*)pvPortMalloc(IPERF_BUFSZ);
    if (recv_data == NULL) {
        printf("No memory for iperf\n");
    }

    conn = netconn_new(NETCONN_TCP);
    netconn_bind(conn, IP_ADDR_ANY, IPERF_PORT);

    LWIP_ERROR("tcpecho: invalid conn", (conn!=NULL), return;);

    netconn_listen(conn);

    while(1) {
        err = netconn_accept(conn, &newconn);

        if (err == ERR_OK) {
            while ((err=netconn_recv(newconn, &buf)) == ERR_OK) {
                do {
                    netbuf_data(buf, &recv_data, &len);
                } while (netbuf_next(buf) >= 0);
                netbuf_delete(buf);
            }

            netconn_close(newconn);
            netconn_delete(newconn);
        }
    }
}

void iperf_server_init(void)
{
    xTaskCreate(iperf_server, TCP_SERVER_THREAD_NAME, \
        TCP_SERVER_THREAD_STACKSIZE, NULL, TCP_SERVER_THREAD_PRIO, \
        NULL);
}
