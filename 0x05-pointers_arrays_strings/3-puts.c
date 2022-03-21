#include "main.h"

/**
 * _strlen - length of string
 * @s:char
 * Return:int
 */
void _puts(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return;
