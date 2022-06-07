#include "main.h"
/**
* print_alphabet_x10 - check the code
*
* Return: Always void.
*/
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char lower = 'a';
while (lower <= 'z')
{
_putchar(lower);
lower++;
}
i++;
_putchar('\n');
}
}
