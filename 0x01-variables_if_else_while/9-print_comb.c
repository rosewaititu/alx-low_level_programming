#include <stdio.h>
/**
 * main -pront numbers with comma and space
 *
 *
 * Return:Always zero
 */
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x == 9)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
