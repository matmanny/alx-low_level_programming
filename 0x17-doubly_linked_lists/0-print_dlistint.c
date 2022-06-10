#include "lists.h"

/**
 * print_dlistint - print element in list
 * @h:struct list
 * Return:list len
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x;
	size_t len = 0;

	for (x = 0; h; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
return (len);
}
