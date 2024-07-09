#include "pico/stdlib.h"
#include "hardware/uart.h"
#include "hardware/irq.h"
#include "set_pwm.h"
#include "uart_defines.h"
#include "uart_handler.h"


void on_uart_rx();
int setup_uart();
