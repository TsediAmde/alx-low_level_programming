#include <stdio.h>
/**
* main - Entry point
*
* Return: Always (Success)
*/
int main(void)
{
int t1, t2;
for (t1 = 0; t1 <= 98; t1++)
{
for (t2 = t1 + 1; t2 <= 99; t2++)
{
putchar((t1 / 10) + '0');
putchar((t1 % 10) + '0');
putchar(' ');
putchar((t2 / 10) + '0');
putchar((t2 % 10) + '0');
if (t1 == 98 && t2 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
