#include "lists.h"

/**
 * free_listint - free list
 * @head:pointer to node element
 * Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *check, *h;

h = head;
while (h != NULL)
{
	check = h->next;
	free(h);
	h = check;
}
}
