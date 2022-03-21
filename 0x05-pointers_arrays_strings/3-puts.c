#include "main.h"

/**
 * _puts - prints a string
 * @str:pointer char
 * Return:void
 */
void _puts(char *str)
{
	int i = 0;
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
