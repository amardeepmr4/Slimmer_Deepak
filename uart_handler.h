#include <string.h>
#include "pico/stdbool.h"
#include "hardware/uart.h"
#include "uart_defines.h"

#define MES_LEN 20

#define CMD_HEAD1           0x5A
#define CMD_HEAD2           0xA5
#define CMD_WRITE           0x82
#define CMD_READ            0x83

#define MIN_ASCII           32
#define MAX_ASCII           255

#define CMD_READ_TIMEOUT    50
#define READ_TIMEOUT        100

 extern uint8_t message[MES_LEN];

void handle(void);
