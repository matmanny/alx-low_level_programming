#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>
/**
 * print_strings - print strings
 * @separator:char
 * @n:unsigned int
 * Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int j;
	char *str;

	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		str = va_arg(list, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (j < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
