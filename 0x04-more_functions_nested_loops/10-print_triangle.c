#include "main.h"
/**
  *print_triangle - prints a triangle
  *@size:size parameter of triangle
  *Return:returns nothing
  */
void print_triangle(int size)
{
int x, y;

if (size > 0)
{
for (x = 1; y <= size; x++)
{
for ((y = size - x); y > 0; y--)
_putchar(' ');

for (y = 0; y < inc1; y++)
_putchar('#');

if (x == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
