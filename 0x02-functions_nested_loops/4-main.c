#include "main.h"
/**
* checks for alphabetic character
* @c: the character to be checked
*
* Return: 1 if c is a letter , lowercase or uppercase , 0 otherwise
*/
int main(void)
{
int r;
r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}
