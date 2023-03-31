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
	if (n < 1)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
