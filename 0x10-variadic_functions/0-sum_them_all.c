#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Sum
 *
 * @n: Parameter
 *
 * Return: Sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int s;
	int sum = 0;
	va_list d;

	if (n == 0)
	{
		return (0);
	}
	va_start(d, n);
	for (s = 0; s < n; s++)
	{
		sum = sum + va_arg(d, int);
	}
	va_end(d);
	return (sum);
}
