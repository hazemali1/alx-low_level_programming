#include "main.h"

/**
 * binary_to_uint - Conert
 *
 * @b: Parameter
 *
 * Return: Number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int s = 0, w = 1;
	int d = 0, r;

	if (b == 0)
	{
		return (0);
	}
	while (b[d] != '\0')
	{
		d++;
	}
	d--;
	for (r = d; r >= 0; r--)
	{
		if (b[r] != '1' && b[r] != '0')
		{
			return (0);
		}
		s += (b[r] - 48) * w;
		w *= 2;
	}
	return (s);
}
