#include "main.h"
/**
 *main.h-prints putchar.c
*
* Return:output
*/int main(void){
	char* main="_putchar";
	while (*main)
	{
		_putchar (*main);
		main++;}
	_putchar("/n");
		return(0);
}
