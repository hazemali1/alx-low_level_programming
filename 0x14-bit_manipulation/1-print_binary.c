#include "main.h"

/**
 * print_binary - Print binary
 *
 * @n: PArameter
*/
void print_binary(unsigned long int n)
{
	int f, r = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	for (f = 63; f >= 0; f--)
	{
		if (1 & (n >> f))
		{
			_putchar('1');
			r = 1;
		}
		else if (r == 1)
		{
			_putchar('0');
		}
	}
}
