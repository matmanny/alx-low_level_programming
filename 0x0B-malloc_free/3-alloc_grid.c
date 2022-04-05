#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: int
 * @height:int
 *
 * Return: a double pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int x, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		a[x] = (int *)malloc(sizeof(int) * width);
		if (a[x] == NULL)
		{
			for (j = 0; j < x; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			a[x][j] = 0;
		}
	}
	return (a);
}
