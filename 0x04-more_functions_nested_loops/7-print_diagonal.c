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
	int s;

	if (n > 0)
	{
	for (s = 0; s < n; s++)
	{
		_putchar(92);
	}
	}
	_putchar('\n');
}
