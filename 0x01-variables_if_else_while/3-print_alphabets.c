#include<stdio.h>
/**
 * main-prints upper and lowr alphabet
 *
 * Return:always zero
 */
int main(void)
{
char c = 'a';
char C = 'A';
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (C = 'A'; C <= 'Z'; C++)
putchar(C);
putchar('\n');
return (0);
}
