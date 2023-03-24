#include "main.h"
#include <stdio.h>

/**
 * print_number - Print
 * @n: Prameter
 * Return: Return 0 (sucess)
*/
void print_number(int n)
{
	unsigned int s = n;

	if (n < 0)
	{
	n = n * (-1);
	s = n;
	_putchar('-');
	}
	s = s / 10;
	if (s != 0)
	print_number(s);
	_putchar((unsigned int) n % 10 + '0');
}
