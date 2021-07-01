#include "holberton.h"

/**
 * leet - transform to leet
 * @str: char array string type
 * Return: str transformed
 */

char *leet(char *str)
{
int i, j;
char s1[] = "aeotl";
char S1[] = "AEOTL";
char s2[] = "43071";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 5; j++)
{
if (str[i] == s1[j] || str[i] == S1[j])
{
str[i] = s2[j];
break;
}
}
}
return (str);
}
