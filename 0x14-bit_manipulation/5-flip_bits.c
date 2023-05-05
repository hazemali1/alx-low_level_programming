#include "main.h"

/**
 * flip_bits - Flipping
 *
 * @n: Parameter1
 * @m: Parameter2
 *
 * Return: how many
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	unsigned int s = 0;
	int e, f = sizeof(n) * 8;

	d = n ^ m;
	for (e = 0; e < f; e++)
	{
		if (d >> e & 1)
		{
			s++;
		}
	}
	return (s);
}
