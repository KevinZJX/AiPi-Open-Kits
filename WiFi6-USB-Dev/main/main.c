/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-08-22
 *
 * @copyright Copyright (c) 2023
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <FreeRTOS.h>
#include <task.h>
#include "board.h"

#include "log.h"
#include "shell.h"
#include <lwip/tcpip.h>
#include <lwip/ip4_nat.h>
#include "bflb_uart.h"

#include "wifi_event.h"
#include "wifi6_led.h"
#include "user_state.h"
#include "user_esflash.h"
#include "user_usb.h"
#include "iperf.h"

#ifdef DBG_TAG
#undef DBG_TAG
#define DBG_TAG "MAIN"
#endif

extern void shell_init_with_task(struct bflb_device_s *shell);

static struct bflb_device_s *uart0;

int main(void)
{
    board_init();

    uart0 = bflb_device_get_by_name("uart0");
    shell_init_with_task(uart0);

    esay_flash_init();
    led_init();
    user_state_start();
    tcpip_init(NULL, NULL);
    ip4_nat_init();
    usb_init();
    wifi_start_firmware_task();
    user_state_send_notify(STATE_SYSTEM_START, 0);
    // iperf_server_init();
    vTaskStartScheduler();
}
