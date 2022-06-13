#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* print_rev -  function that prints a string, in reverse, followed by a new line
* @s: character paramerter
*
* Return: nothing
*/
void print_rev(char *s)
{
int len = strlen(s);
int i;
for (i = len - 1; i >= 0; i--)
{
printf("%c", s[i]);
}
printf("\n");
}
