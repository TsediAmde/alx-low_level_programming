#include "main.h"
/**
* print_sign -  function that prints the sign of a number.
* @n: the character to be checked
*
* Return: 1 if character is greater than zero ,
*        -1 if character is less than zero , 
*         0 if character is zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
