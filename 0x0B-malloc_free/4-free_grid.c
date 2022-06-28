#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Write a function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @grid: height array
 * @height: width array
 *
 * Return: Pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
	}
	free(grid);
}
