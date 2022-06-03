#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char lower = 'a';
char upper = 'A';
while ((lower <= 'z')&&(upper <= 'Z'))
{
putchar (lower);
putchar (upper);
putchar ('\n');
lower++;
upper++;
}
return (0);
}
