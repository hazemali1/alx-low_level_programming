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
	if ((sizeof(n) * 8) <= index)
	{
		return (-1);
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
