#include "holberton.h"

/**
* *_strcat - function commute srtings
* @dest: param pointer to a char
* @src: param pointer to a char
* Return: return value of dest
*/

char *_strcat(char *dest, char *src)
{
int i, len;

len = 0;

while (dest[len] != '\0')
{
++len;
}

for (i = 0; src[i] != '\0'; ++i, ++len)
{
dest[len] = src[i];
}

dest[len] = '\0';
return (dest);
}
