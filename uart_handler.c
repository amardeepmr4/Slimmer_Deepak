#include "uart_handler.h"

uint8_t message[MES_LEN];
bool g_valid_messgage = false;

void handle(void)
{
        int lastByte;
	int pos = 0;
	bool isFirstByte = false;
	bool isSubstr = false;
	bool messageEnd = true;
        
	memset(message, 0 , sizeof(uint8_t)*MES_LEN);

	uint8_t ch;
        while (uart_is_readable(UART_ID)) {
	    int inhex = uart_getc(UART_ID);
            if (inhex == 90 || inhex == 165){
                isFirstByte = true;
                continue;
            }

	    for(int i = 1 ; i <= inhex ;i++){
                int inByte = uart_getc(UART_ID);;
                if (i <= 3){
                    if((i == 2) || (i == 3)){
			//Why we need this?
                        //address.concat(checkHex(inByte));
                    }
                    continue;
                }
                else{
                    if(messageEnd){
                        if (isSubstr && inByte != MAX_ASCII && inByte >= MIN_ASCII){
                            message[pos] = (uint8_t)inByte;
			    pos++;
                        }
                        else{
                            if(inByte == MAX_ASCII){
                                messageEnd = false;
                            }
                            isSubstr = true;
                        }
                    }
                }
                lastByte = inByte;
            }
	}

	if (isFirstByte){
		g_valid_messgage = true;
        }
}
