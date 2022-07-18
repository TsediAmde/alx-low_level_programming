#include "lists.h"

/**
 * listint_len - function returns number of elements in listint_t list
 *
 * @h: character parameter
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int t;

	for (t = 0; h != NULL; t++)
	{
		h = h->next;
	}
	return (t);
}
