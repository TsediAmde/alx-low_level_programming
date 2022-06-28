#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - function that returns a pointer to a newly allocated space in
* memory, which contains a copy of the string given as a parameter.
*
* @str: array
*
* Return: Pointer
*/
char *_strdup(char *str)
{
int a, b;
char *string;
if (str == NULL)
{
return (0);
}
a = 0;
while (*(str + a) != '\0')
{
a++;
}
string = malloc(a + 1);
if (string == 0)
{
return (0);
}
for (b = 0; b < a; b++)
{
*(string + b) = *(str + b);
}
return (string);
}
