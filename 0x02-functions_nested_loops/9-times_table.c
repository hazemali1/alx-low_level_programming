#include "main.h"

/**
 * times_table - Print
 *
 * Description: Time table
 *
 * Return: Return o (sucess)
*/
void times_table(void)
{
	int f, s, d, u, q;

	for (s = 0; s <= 9; s++)
	{
	for (d = 0; d <= 9; d++)
	{
	f = s * d;
	if (f <= 9)
	{
	u = f % 10;
	q = (f - u);
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
	_putchar('\n');
	}
}
