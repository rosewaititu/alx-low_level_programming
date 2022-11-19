nclude <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcode
 * @a: address of main function
 * @n: no of bytes to print
 *
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);

		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, a);
	return (0);
}
