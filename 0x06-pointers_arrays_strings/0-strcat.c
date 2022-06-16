#include "main.h"
#include <stdio.h>
/**
* _strcat - function that concatenates two strings
* @dest: character parameter
* @src: character parameter
*
* Return: two contact string
*/
char *_strcat(char *dest, char *src)
{
int i = 0, c = 0, n = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[c] != '\0')
{
c++;
}
while (n <= c)
{
dest[i] = src[n];
n++;
i++;
}
return (dest);
}
