#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int k = 0, n;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + k))
	{
		if (*(s + k) >= 'a' && *(s + k) <= 'z')
		{
			if (k == 0)
				*(s + k) -= 'a' - 'A';
			else
			{
				for (n = 0; n <= 12; n++)
				{
					if (a[n] == *(s + k - 1))
						*(s + k) -= 'a' - 'A';
				}
			}
		}
		k++;
	}
	return (s);
}
