#include "main.h"

/**
 * print_line - Print
 *
 * Description: Print line
 *
 * @n: Parameter
 *
 * Return: Returns 0 (sucess)
*/
void print_line(int n)
{
	int s;

	if (n > 0)
	{
	for (s = 0; s < n; s++)
	{
		_putchar(95);
	}
	}
	_putchar('\n');
}
