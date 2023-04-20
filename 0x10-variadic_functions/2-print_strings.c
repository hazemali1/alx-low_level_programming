#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Print string
 *
 * @separator: Parameter1
 * @n: Parameter2
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int s;
	va_list d, f;

	va_copy(f, d);
	va_start(d, n);
	va_start(f, n);
	for (s = 0; s < n; s++)
	{
		if (separator == NULL)
		{
			if (va_arg(f, char *) != NULL)
			{
				printf("%s", va_arg(d, char *));
			}
			else
			{
				printf("(nil)");
				va_arg(d, char *);
			}
		}
		else
		{
			if (va_arg(f, char *) != NULL)
			{
				printf("%s", va_arg(d, char *));
			}
			else
			{
				printf("(nil)");
				va_arg(d, char *);
			}
			if (s < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(d);
	va_end(f);
	printf("\n");
}
