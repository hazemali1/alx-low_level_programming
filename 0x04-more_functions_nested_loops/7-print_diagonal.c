#include "main.h"

/**
 * print_diagonal - Print
 *
 * Description: Print line
 *
 * @n: Parameter
 *
 * Return: Returns 0 (sucess)
*/
void print_diagonal(int n)
{
	int s, d;

	if (n > 0)
	{
	for (s = 0; s < n; s++)
	{
		_putchar(92);
		_putchar('\n');
		if (s < n - 1)
		{
		for (d = 0; d <= s; d++)
		{
			_putchar(32);
		}
		}
	}
	}
	_putchar('\n');
}
