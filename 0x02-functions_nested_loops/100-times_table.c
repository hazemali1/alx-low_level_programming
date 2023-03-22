#include "main.h"

/**
 * print_times_table - Print
 *
 * Description: Time table
 *
 *@n: Parameter
 *
 * Return: Return o (sucess)
*/
void print_times_table(int n)
{
	int f, s, d;

	if (n <= 15 && n >= 0)
	{
	for (s = 0; s <= n; s++)
	{
	_putchar('0');
	for (d = 1; d <= n; d++)
	{
	_putchar(',');
	_putchar(' ');
	f = s * d;
	if (f <= 99)
	_putchar(' ');
	if (f <= 9)
	_putchar(' ');
	if (f >= 100)
	{
	_putchar((f / 100) + '0');
	_putchar(((f / 10)) % 10 + '0');
	}
	else if (f <= 99 && f >= 10)
	{
	_putchar((f / 10) + '0');
	}
	_putchar((f % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
