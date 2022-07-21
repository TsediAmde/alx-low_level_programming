#include "main.h"

/**
 * get_bit - Entry Point
 * @n: input
 * @index: index
 *
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int t;

	if (index > 63)
		return (-1);

	t = 1 << index;
	return ((n & t) > 0);
}
