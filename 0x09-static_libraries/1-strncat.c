#include "main.h"
#include <stdio.h>
/**
* _strncat - function that concatenates two strings
* @dest: character parameter
* @src: character parameter
* @n: int
*
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
int j;
int i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
