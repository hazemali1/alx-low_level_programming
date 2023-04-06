#include "main.h"

/**
 * tired - Tired
 *
 * @s: Parameter1
 * @d: Parameter2
 *
 * Return: Return sqrt
*/
int tired(int s, int d)
{
	if (s == d * d)
	{
		return (d);
	}
	else if (s > d * d)
	{
		tired(s, d + 1);
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - Sqrt
 *
 * @n: Parameter1
 *
 * Return: Return tired
*/
int _sqrt_recursion(int n)
{
	return (tired(n, 1));
}
