#include "main.h"

/**
 * factorial - Factorial
 *
 * @n: Parameter
 *
 * Return: Return factorial
*/
int factorial(int n)
{
	int d = n;

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n > 1)
	{
		d = d * factorial(n - 1);
	}
	return (d);
}
