#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str:string
 *
 * Return:char
 */
char *_strdup(char *str)
{
	char *s;
	int x, l = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		l++;

	s = malloc(sizeof(char) * (l + 1));

	if (s == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		s[x] = str[x];

	s[l] = '\0';

	return (s);
}
