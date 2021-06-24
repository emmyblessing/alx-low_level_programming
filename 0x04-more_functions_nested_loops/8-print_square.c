#include "holberton.h"
#include <stdio.h>

/**
* print_square - Print square line dependent on the integer n.
* @size : The number of lines using '#' characters to use per row and column
* Return: Void.
*/

void print_square(int size)
{
int a;
int b;

for (a = 0; a < size; a++)
{
for (b = 0; b < size; b++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
