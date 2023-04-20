#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Print anything
 *
 * @format: Parameter
*/
void print_all(const char * const format, ...)
{
	int s = 0, d = 0, w = 0, u = 1;
	char *t;
	va_list q;

	if (format)
	{
	while (format[d] != '\0')
	{
		if (format[d] == 'c' || format[d] == 'i' || format[d] == 'f'
		|| format[d] == 's')
			w++;
	d++; }
	va_start(q, format);
	while (format[s])
	{
		switch (format[s])
		{
			case 'c':
				printf("%c", va_arg(q, int));
				break;
			case 'i':
				printf("%d", va_arg(q, int));
				break;
			case 'f':
				printf("%f", va_arg(q, double));
				break;
			case 's':
				t = va_arg(q, char *);
				t == NULL ? printf("(nil)") : printf("%s", t);
				break;
			default:
				s++;
				continue;
		}
		u < w ? printf(", "), u++ : u++;
	s++;
	}
	}
	printf("\n");
	va_end(q);
}
