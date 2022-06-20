#include "main.h"
#include <stdio.h>
/**
* print_diagsums - Print the sum of two diagonals of square matrix
* @a: the matrix
* @size: the size
*
* Return: Nothing.
*/
void print_diagsums(int *a, int size)
{
int b, i = 0, j = 0;
for (b = 0; b < size; b++)
{
i += a[(size + 1) * b];
j += a[(size - 1) * (b + 1)];
}
printf("%d, %d\n", i, j);
}
