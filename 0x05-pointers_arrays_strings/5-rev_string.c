#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* rev_string -  function that prints a string, in reverse
* @s: character paramerter
*
* Return: nothing
*/
void rev_string(char *s)
{
char rev = s[0];
int counter = 0;
int i;
while (s[counter] != '\0')
counter++;
for (i = 0; i < counter; i++)
{
counter--;
rev = s[i];
s[i] = s[counter];
s[counter] = rev;
}
}
