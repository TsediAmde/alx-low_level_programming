#include "main.h"
#include <stdio.h>
/**
* _atoi -  function that convert a string to an integer
* @s: string to covert
*
* Return: converted string
*/
int _atoi(char *s)
{
short b;
int i, m, result;
i = m = result = b = 0;
m = -1;
while (s[i] != '\0')
{
if (s[i] == '-')
m *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
result *= 10;
result -= (s[i] - '0');
b = 1;
}
else if (b == 1)
break;
i++;
}
result *= m;
return (result);
}
