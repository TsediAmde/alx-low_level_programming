#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0 
* @n: the fuctionparametr 
*
*/
void print_times_table(int n)
{
int mult, incr, result, temp;
if (n > 0 && n <= 15)
{
for (incr = 0; incr <= n; incr++)
{
for (mult = 0; mult <= n; mult++)
{
result = incr * mult;
if(result <= 9)
{
_putchar (result % 10 + '0');
}      
else if(result <100)
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
temp=result/10;
_putchar((temp / 10) + '0');
_putchar((temp % 10) + '0');
_putchar((result % 10) + '0');
}
if(mult!=n)
{
_putchar(','); 
_putchar(' '); 
}
}
_putchar('\n');
}
}
}
