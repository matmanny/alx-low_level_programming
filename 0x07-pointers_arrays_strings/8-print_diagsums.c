#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of 2 digona
 * @a:int
 * @size:int size
 * Return:void
 */
void print_diagsums(int *a, int size)
{
int n, s1 = 0, s2 = 0;

	for (n = 0; n < size; n++)
	{
		s1 += a[n];
		a += size;
	}

	a -= size;

	for (n = 0; n < size; n++)
	{
		s2 += a[n];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
