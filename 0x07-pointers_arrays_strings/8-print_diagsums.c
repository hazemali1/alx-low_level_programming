#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Sum
 *
 * Description: Sum
 *
 * @a: Parameter1
 * @size: Parameter2
*/
void print_diagsums(int *a, int size)
{
	int s, d = 0, f = 0;

	for (s = 0; s < size; s++)
	{
		d = d + a[s];
		f = f + a[size - s - 1];
		a = a + size;
	}
	printf("%d, ", d);
	printf("%d\n", f);
}
