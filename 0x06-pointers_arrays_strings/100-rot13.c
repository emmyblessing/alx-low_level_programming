#include "holberton.h"

/**
 * *rot13 - encodes a string using rot13.
 * @str: int type array pointer
 * Return: encoded
 */

char *rot13(char *str)
{
int i, j;
char input[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 54; j++)
{
if (((str[i] <= 'z' && str[i] >= 'a') || (str[i] <= 'Z' && str[i] >= 'A')) && str[i] == input[j])
{
str[i] = output[j];
break;
}
}
}
return (str);
}
