#include "holberton.h"

/**
* rev_string - reverse string
* @s: string
*/

void rev_string(char *s)
{
char *a = s;
char n[1000];
short c = 0;

while (*s != '\0')
{
n[c] = *s;
s++;
c++;
}
c = 0;

while (s > a)
{
s--;
*s = n[c];
c++;
}
}
