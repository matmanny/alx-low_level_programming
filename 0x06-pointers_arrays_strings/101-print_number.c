#include "main.h"

/**
 * print_number -print number putchar
 * @n:integer
 * Return: void
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((i / 10) > 0)
		print_number(i / 10);

	_putchar(i % 10 + '0');
}
