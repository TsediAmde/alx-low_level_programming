#include "main.h"
#include <stdio.h>
/**
* cap_string - function that capitalizes all words of a string
* @n:
* Return: capitialized string
*/
char *cap_string(char *n)
{
int i, j;
char separators[] = " \t\n,;.!?\"(){}";
i = 1;
if (n[0] >= 'a' && n[0] <= 'z')
n[0] -= ('a' - 'A');
while (n[i] != '\0')
{
for (j = 0; separators[j] != '\0'; j++)
if (n[i - 1] == separators[j] && (n[i] >= 'a' && n[i] <= 'z'))
n[i] -= ('a' - 'A');
i++;
}
return (n);
}
