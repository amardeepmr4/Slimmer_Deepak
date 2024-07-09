#include "uart.h"
int main()
{
	setup_uart();
    	while (1)
        	tight_loop_contents();
}
