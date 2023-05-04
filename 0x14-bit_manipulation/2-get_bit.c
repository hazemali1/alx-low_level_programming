#include "main.h"

/**
 * get_bit - Get bit
 *
 * @n: Parameter1
 * @index: Parameter2
 *
 * Return: 1, 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s, d = 1;
	unsigned long int w = n;

	while (w / 10 != 0)
	{
		w /= 10;
		d++;
	}
	s = 4 * d;
	if (s <= index)
	{
		return (-11);
	}
	if (n & 1 << index)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
