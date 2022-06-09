#include "main.h"
/**
* print_number - prints the numbers since 0 up to 9
*
* Return: The number since 0 up to 9
*/
void print_numbers(void)
{
int i =0;
while (i <= 9)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
}
