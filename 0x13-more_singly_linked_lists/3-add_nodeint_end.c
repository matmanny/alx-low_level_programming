#include "lists.h"

/**
 * add_nodeint_end - add node at the end of the list
 *@head:pointer to last node
 *@n:integer elment in node
 * Return:new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	start = *head;
	neew = malloc(sizeof(listint_t));
	if (neew == NULL)
		return (NULL);
	neew->n = n;
	neew->next = NULL;
	if (*head == NULL)
	{
		*head = neew;
		return (neew);
	}
	while (start->next)
	{
		start = start->next;
	}

	start->next = neew;
	return (neew);
}
