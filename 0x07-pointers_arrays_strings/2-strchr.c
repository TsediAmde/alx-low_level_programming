#include "main.h"
#include <stdio.h>
/**
* _strchr - function that locates a character in a string
* @s: source string
* @c: character to find
*
* Return: string from character found
*/
char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
