#include "main.h"
/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Retrun: char
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
