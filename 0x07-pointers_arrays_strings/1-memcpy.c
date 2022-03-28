#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest:char
 * @src:char
 * @n:int
 * Return:char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];

return (dest);
}
