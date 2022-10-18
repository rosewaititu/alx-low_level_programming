#include "main.h"
/**
 *main.h-prints putchar.c
*
* Return:output
*/int main(void){
	char* ch="_putchar";
	while (*ch)
	{
		_putchar (*ch);
		ch++;}
	_putchar("/n");
		return(0);
}
