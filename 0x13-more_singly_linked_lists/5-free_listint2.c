#include "lists.h"

/**
 * free_listint2 - free list
 * @head:pointer to list
 * Return:void
 */
void free_listint2(listint_t **head)
{
	listint_t *h;

if (head == NULL)
	return;
while (*head)
{
	h = *head;
	*head = (*head)->next;
	free(h);
}
head = NULL;
}
