#include "main.h"

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */
int _strlen(const char *s)
{
	int j;

		for (j = 0; s[j] != '\0'; j++)
		{
			continue;
		}
return (j);
}
/**
 * binary_to_uint - convert binary to unsigned int
 * @b:string from 0 and 1 else NULL
 *
 * Return:unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (c = len - 1; c >= 0; c--)
	{
	if (b[c] != '0' && b[c] != '1')
		return (0);
	if (b[c] == '1')
	{
		j += k;
	}
	k *= 2;
}
	return (j);
}
