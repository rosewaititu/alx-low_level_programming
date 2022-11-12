#include <stdio.h>
#include <stdlib.h>

/**
 * main - does multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
int a, b, multiply;
if (argc <= 2)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
multiply = a *b;
printf("%d\n", multiply);
return (0);
}
