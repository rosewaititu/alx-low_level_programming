#include "main.h"

/**
 * _strcmp - compares strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: Always successful
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}