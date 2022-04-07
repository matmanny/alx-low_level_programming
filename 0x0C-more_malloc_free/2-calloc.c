#include "main.h"
#include "stdio.h"
#include <stdlib.h>
/**
 * _calloc - allocate an array
 * @nmemb:int
 * @size:int
 * Return:void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *x;
unsigned int j;

if (size == 0 || nmemb == 0)
return (NULL);
x = malloc(size * nmemb);
if (x == NULL)
return (NULL);
	for (j = 0; j < nmemb * size; j++)
	{
		x[j] = '\0';
	}
	return (x);
}
