#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*
*
*/
void times_table(void)
{
int mult;
int incr;
int result;
for (incr = 0; incr <= 9; incr++)
{
_putchar('0');
for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');
result = incr * mult;
if (result <= 9)
_putchar (' ');
else
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
