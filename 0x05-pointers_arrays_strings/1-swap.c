#include "main.h"

/**
 * swap_int - Swap
 *
 * Description: Swaps
 *
 * @a: Parameter1
 * @b: Parameter2
 *
 * Return: Return 0 (sucess)
*/
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

