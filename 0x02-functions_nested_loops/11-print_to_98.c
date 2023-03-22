#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - PRINT
 *
 * @n: Count
*/
void print_to_98(int n)
{
	int s;

	if (n > 98)
		for (s = n; s > 98; s--)
			printf("%d", s);
	else
		for (s = n; s < 98; s++)
			printf("%d", s);
	printf("98\n");
}
