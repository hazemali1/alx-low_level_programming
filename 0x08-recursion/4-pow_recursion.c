#include "main.h"

/**
 * _pow_recursion - Power
 *
 * @x: Parameter1
 * @y: Parameter2
 *
 * Return: Return x
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y > 1)
	{
		x = x * _pow_recursion(x, y - 1);
	}
	return (x);
}
