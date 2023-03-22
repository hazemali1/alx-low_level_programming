#include "main.h"

/**
 * print_times_table - Print
 *
 * Description: Time table
 *
 * Return: Return o (sucess)
*/
void print_times_table(int n)
{
	int f, s, d, u, q;
	if (n <= 15 && n >= 0)
	{
	for (s = 0; s <= n; s++)
	{
	for (d = 0; d <= n; d++)
	{
	f = s * d;
	if (f > 9)
	{
	u = f % 10;
	q = (f - u) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(q + '0');
	_putchar(u + '0');
	}
	else
	{
	if (d != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(f + '0');
	}
	}
	}
	_putchar('\n');
	}
}
