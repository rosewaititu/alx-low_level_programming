#include <stdio.h>
/**
 * main-prints alphabets in reverse
 *
 * return:Always zero
 */
int main(void)
{
char x;
for (x = 'z'; x >= 'a'; x--)
putchar(x);
putchar('\n');
return (0);
}
