#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
