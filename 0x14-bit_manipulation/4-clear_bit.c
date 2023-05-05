#include "main.h"

/**
 * clear_bit - Clear bit
 *
 * @n: Parameter1
 * @index: Parameter2
 *
 * Return: 1, -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(n) * 8) <= index)
	{
		return (-1);
	}
	else
	{
		*n &= (~(1 << index));
		return (1);
	}
}
