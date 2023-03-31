#include "main.h"
#include <stdio.h>

/**
 * print_number - Print
 *
 * Description: Print
 *
 * @n: Parameter
 *
 * Return: Return 0 (sucess)
*/
void print_number(int n)
{
	unsigned int s;

	s = n;
	if (n < 0)
	{
		_putchar('-');
		s = n * -1;
	}
	if (s / 10 != 0)
	{
		print_number(s / 10);
	}
	_putchar((s % 10) + '0');
}
