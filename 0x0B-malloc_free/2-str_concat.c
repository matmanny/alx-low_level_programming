#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concat 2 string
 * @s1:string1
 * @s2:string2
 * Return:char
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int x, j, i, l;
	char *s;

	if (s1 == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x]; x++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	i = x + j + 1;
	s = malloc(i * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (l = 0; l < x; l++)
		s[l] = s1[l];
	for (l = 0; l < j; l++)
		s[l + x] = s2[l];
	s[x + j] = '\0';
	return (s);
}
