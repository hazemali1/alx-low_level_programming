#include "main.h"

/**
 * loop - Loop
 *
 * @s: Parameter1
 * @d: Parameter2
 *
 * Return: Return 1,0
*/
int loop(int s, int d)
{
	if (s == 0 || s == 1 || s < 0)
	{
		return (0);
	}
	if (s % d != 0 && s > d)
	{
		return (loop(s, d + 1));
	}
	else if (s <= d)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - Calling loop
 *
 * @n: Parameter
 *
 * Return: Return loop
*/
int is_prime_number(int n)
{
	return (loop(n, 2));
}
