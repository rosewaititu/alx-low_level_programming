#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
unsigned int x, total, num;
total = 0;
if (argc < 3)
{
printf("%d\n", 0);
return (0);
}
while (argc-- && argc > 0)
{
for (x = 0; argv[argc][x] != '\0'; x++)
{
if (!(isdigit(argv[argc][x])))
{
printf("Error\n");
return (1);
}															}
num = atoi(argv[argc]);
total += num;
}
printf("%d\n", total);
return (total);
}
