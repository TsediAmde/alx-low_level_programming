#include "main.h"
#include <stdio.h>
/**
* reverse_array - reverses the content of an array of integers
* @a: character parameter
* @n: character parameter
*
* Return: always 0
*/
void reverse_array(int *a, int n)
{
int i, rev;
for (i = 0; i < n; i++)
{
n--;
rev = a[i];
a[i] = a[n];
a[n] = rev;
}
}
