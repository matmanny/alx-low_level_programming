#include "main.h"
#include "stdio.h"
#include <stdlib.h>
/**
 **array_range - a function that creates an array of integers.
 *@min : int
 *@max : int
 *Return: pointer to array of integer
 */
int *array_range(int min, int max)
{
	int *p;
	int x, n = 0;

	if (min > max)
	return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	return (NULL);
	for (x = min; x <= max; x++)
	{
		p[n] = x;
		n++;
	}
	return (p);
}
