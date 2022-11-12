#include "main.h"

/**
 * _strcat - concantenate 2 strings
 *
 * @dest: destination
 * @src: source
 * Return: to dest
 */

char *_strcat(char *dest, char *src)
{
int k, x;
k = 0;
x = 0;
while (dest[k] != '\0')
k++;
while (src[x] != '\0')
{
dest[k] = src[x];
x++;
k++;
}
dest[k] = '\0';
return (dest);
}
