#include "main.h"

/**
 * print_binary - Print binary
 *
 * @n: PArameter
*/
void print_binary(unsigned long int n)
{
	unsigned long int d = 0x80000000, f;

	if (n == 0)
	{
		_putchar('0');
	}
	for (f = 0; f < 32; f++)
	{
		if (n & (d >> f))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
