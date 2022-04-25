#include "lists.h"
/**
 * pop_listint - delete the head node
 *@head: pointer to list
 *Return: head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *x;
int i;

x = *head;
	if (x == NULL)
		return (0);
*head = x->next;
i = x->i;
free(x);
return (i);
}
