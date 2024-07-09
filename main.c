#include "uart.h"
#include "controlMessage.h"
int main()
{
	setup_uart();
    	while (1)
	{
		//Control and Configure the message
		CnC_message();
		//Refresh rate 100ms
		sleep_ms(100);

		//Need more understanding for this api..
        	//tight_loop_contents();
	}
}
