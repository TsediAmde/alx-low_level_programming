#include "main.h"
#include <stdio.h>
/**
* _strspn - function that gets the length of a prefix substring
* @s: source string
* @accept: accepted string
*
* Return: number of bytes in the init segment
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j, k = 0;
while (accept[i])
{
j = 0;
while (s[j] != 32)
{
if (accept[i] == s[j])
{
k++;
}
j++;
}
i++;
}
return (k);
}
