#include "main.h"

/**
 * print_binary - Print binary
 *
 * @n: PArameter
*/
void print_binary(unsigned long int n)
{
	unsigned long int d = 0x80000000;
	int e = sizeof(n) * 8, f, r = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	for (f = 0; f < e; f++)
	{
		if (n & (d >> f))
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
