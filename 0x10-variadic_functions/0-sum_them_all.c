#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Sum
 *
 * @n: Parameter
 *
 * Return: Sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int s, sum = 0;
	va_list d;

	if (n == 0)
	{
		return (0);
	}
	va_start(d, s);
	for (s = 0; s < n - 1; s++)
	{
		sum = sum + va_arg(d, int);
	}
	va_end(d);
	return (sum);
}
