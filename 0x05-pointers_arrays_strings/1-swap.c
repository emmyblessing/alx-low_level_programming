#include "holberton.h"

/**
 * swap_int - main
 * @a: pointer int
 * @b: pointer int
 */

void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
