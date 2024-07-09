#include "controlMessage.h"

void handle_task(char *mes)
{
	// Needs to write our conditional code here..
}

void CnC_message(void)
{
	if(g_valid_messgage)
	{
		g_valid_messgage = false;
		handle_task(message);
	}
}
