#include "lists.h"

/**
 * add_nodeint - add node list
 * @head:pointer to node
 * @n:int to refill
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neew;

	neew = malloc(sizeof(listint_t));
	if (neew == NULL)
		return (NULL);

	neew->next = *head;
	neew->n = n;
	*head = neew;
	return (neew);

}
