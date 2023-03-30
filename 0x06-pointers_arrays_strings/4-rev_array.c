#include "main.h"

/**
 * reverse_array - Rev
 *
 * Description: Rev
 *
 * @a: Parameter
 * @n: Parameter
 *
 * Return: Return 0 (sucess)
*/
void reverse_array(int *a, int n)
{
	int e[13], r, s;

	r = n;
	for (s = 0; s < r; s++)
	{
		e[s] = a[s];
	}
	for (s = 0; s < r; s++)
	{
		a[s] = e[n - 1];
		n--;
	}
}
