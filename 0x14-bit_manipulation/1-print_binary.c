#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: character parameter
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int a = 0, c, b, t;

	if (n == 0)
	{
		printf("0");
		return;
	}

	t = n;

	while (t != 0)
	{
		a++;
		t = t >> 1;
	}

	for (c = a - 1; c >= 0; c--)
	{
		b = n >> c;
		if (b & 1)
			printf("1");
		else
			printf("0");
	}
}
