#include "main.h"
#include <stdio.h>
/**
* _memset - function that fills memory with a constant byte
* @s: character parameter
* @b: character parameter
* @n: character parameter
*
* Return: memory area filled
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
