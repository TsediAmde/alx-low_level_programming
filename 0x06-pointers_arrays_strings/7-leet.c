#include "main.h"
/**
* leet - function that encodes a string into 1337
* @string: pointer to string
*
* Return: Always 0.
*/
char *leet(char *string)
{
int i;
int j;
char lower[] = "aeotl";
char upper[] = "AEOTL";
char number[] = "43071";
for (i = 0; string[i] != '\0'; i++)
{
for (j = 0; lower[j] != '\0' && upper[j] != '\0'; j++)
{
if (string[i] == lower[j] || string[i] == upper[j])
{
string[i] = numbers[j];
break;
}
}
}
return (string);
}
