#include "main.h"

/**
 * set_bit - Set bit
 *
 * @n: PArameter1
 * @index: Parameter2
 *
 * Return: 1, -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if ((sizeof(n) * 8) <= index)
	{
		return (-1);
	}
	else
	{
		*n |= (1L << index);
		return (1);
	}
}
