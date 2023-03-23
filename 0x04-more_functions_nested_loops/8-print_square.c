#include "main.h"

/**
 * print_square - Print
 *
 * Description: Print line
 *
 * @size: Parameter
 *
 * Return: Returns 0 (sucess)
*/
void print_square(int size)
{
	int s, d;

	if (size > 0)
	{
	for (d = 0; d < size; d++)
	{
	for (s = 0; s < size; s++)
	{
		_putchar(35);
	}
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
