#include "variadic_functions.h"
/**
 * sum_them_all - sum of variadic variable
 * @n:const
 * Return:int
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int k;
va_list list;
double sum = 0;

	if (n == 0)
	{
		return (0);
	}
	if (n == 0)
	{
		return (0);
	}
va_start(list, n);
	for (k = 0; k < n; k++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
