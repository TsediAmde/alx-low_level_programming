#include "main.h"
#include <stdio.h>
/**
* _memcpy - function that copies memory area
* @dest: destination memory
* @src: source memory
* @n: number of bytes to be copied
* Return: string copied from source
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int b;
for (b = 0; b < n; b++)
dest[b] = src[b];
return (dest);
}
