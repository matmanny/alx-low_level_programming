#include "main.h"

/**
 * infinite_add - adds two numbers.
 * @n1:char
 * @n2:char.
 * @r:char
 * @size_r:int
 * Return:char.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int a, j, c, l, m, n;

	for (a = 0; n1[a]; a++)
		;
	for (j = 0; n2[j]; j++)
		;
	if (a > size_r || j > size_r)
		return (0);
	m = 0;
	for (a -= 1, j -= 1, c = 0; c < size_r - 1; a--, j--, c++)
	{
		n = m;
		if (a >= 0)
			n += n1[a] - '0';
		if (j >= 0)
			n += n2[j] - '0';
		if (a < 0 && j < 0 && n == 0)
		{
			break;
		}
		m = n / 10;
		r[c] = n % 10 + '0';
	}
	r[c] = '\0';
	if (a >= 0 || j >= 0 || m)
		return (0);
	for (c -= 1, l = 0; l < c; c--, l++)
	{
		m = r[c];
		r[c] = r[l];
		r[l] = m;
	}
	return (r);
}
