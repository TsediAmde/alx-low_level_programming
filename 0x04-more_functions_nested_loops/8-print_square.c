#include "main.h"
/**
* print_square - prints n squares according n number of times
* @n: The number of square/number of times
*
* Return: empty
*/
void print_square(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
_putchar('#');
_putchar('\n');
}
}
else
_putchar('\n');
}

