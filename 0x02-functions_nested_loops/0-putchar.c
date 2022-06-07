#include "main.h"
#include "_putchar.c"
/**
* main - Entry point
*
* Return: Always (Success)
*/
int main(void)
{
char puter[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
int i=0;
while (i<9)
{
_putchar(puter[i]);
i++;
}
_putchar('0' + '\n');
return (0);
}
