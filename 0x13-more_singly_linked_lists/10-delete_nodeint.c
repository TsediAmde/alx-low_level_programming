#include "lists.h"

/**
 * delete_nodeint_at_index - function deletes node at given position
 *
 * @head: pointer to pointer of head of linked list
 * @index: unsigned int index position
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *n;
	unsigned int a;

	if (*head == NULL)
		return (-1);

	t = *head;

	if (index == 0)
	{
		*head = t->next;
		free(t);
		return (1);
	}
	for (a = 0; t != NULL && a < index - 1; a++)
		t = t->n;
	if (t == NULL || t->n == NULL)
		return (-1);

	n = t->n->n;
	free(t->n);
	t->n = n;
	return (1);
}
