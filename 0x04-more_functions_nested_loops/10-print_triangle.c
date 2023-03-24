#include "main.h"

/**
 * print_triangle - Print
 *
 * Description: Print line
 *
 * @size: Parameter
 *
 * Return: Returns 0 (sucess)
*/
void print_triangle(int size)
{
	int s, d, l, f = size;

	if (size > 0)
	{
	for (d = 0; d < size; d++)
	{
	for (s = f; s > 1; s--)
	{
		_putchar(32);
	}
	f--;
	for (l = 0; l <= d; l++)
	{
		_putchar(35);
	}
		if (f >= 0)
		{
		_putchar('\n');
		}
	}
	_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
