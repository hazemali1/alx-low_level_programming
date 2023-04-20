#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print
 *
 * @separator: Parameter1
 * @n: Parameter2
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	va_list d;

	va_start(d, n);
	for (s = 0; s < n; s++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(d, int));
		}
		else
		{
			printf("%d", va_arg(d, int));
			if (s < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(d);
	printf("\n");
}
