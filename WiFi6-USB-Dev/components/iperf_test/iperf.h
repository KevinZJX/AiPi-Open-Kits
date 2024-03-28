#ifndef LWIP_IPERF_H__
#define LWIP_IPERF_H__

#define IPERF_PORT                      5001
#define IPERF_BUFSZ                     (4*1024)

#define TCP_SERVER_THREAD_NAME          "iperf_server"
#define TCP_SERVER_THREAD_STACKSIZE     2048
#define TCP_SERVER_THREAD_PRIO          4

void iperf_server_init(void);

#endif
