#include "main.h"
#include <stdio.h>
/**
* _strlen_recursion - function that prints a string
* @s: string
*
* Return: success
*/
int _strlen_recursion(char *s)
{
if (*s)
{
return (1+_strlen_recursion(s + 1));
}
else
{
return 0;
}
}

