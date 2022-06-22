#include "main.h"
#include <string.h>
/**
*  _puts_recursion - function that prints a string
* @s: string
*
* Return: success 
*/
void _puts_recursion(char *s)
{
while(*s)
{
_putchar(*s);
_puts_recursion(s+1);
}
}

