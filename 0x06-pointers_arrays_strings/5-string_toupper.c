#include "main.h"
#include <stdio.h>
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @n: character parameter
* Return: capitialized string
*/
char *string_toupper(char *n)
{
int i;
i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] -= 'a' - 'A';
i++;
}
return (n);
}
