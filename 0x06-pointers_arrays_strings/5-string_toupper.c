#include "main.h"

/**
 * string_toupper - change lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *s)
{

	int n;

n = 0;
	while (*(s + n))
	{
		if (*(s + n) >= 'a' && *(s + n) <= 'z')
			*(s + n) -= 'a' - 'A';
		n++;
	}
	return (s);
}
