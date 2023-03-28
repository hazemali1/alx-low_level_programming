#include "main.h"
#include <stdio.h>

/**
 * print_array - Print
 *
 * Description: Prints
 *
 * @a: Parameter
 * @n: Parameters
 *
 * Return: Return 0 (sucess)
*/
void print_array(int *a, int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		printf("%d", a[s]);
		if (s < n - 1)
		{
		printf(", ");
		}
	}
	printf("\n");
}
