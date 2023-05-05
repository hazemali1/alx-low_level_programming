#include "main.h"

/**
 * get_endianness - Get endianness
 *
 * Return: 0, 1
*/
int get_endianness(void)
{
	unsigned long int s = 0;
	char *d;

	*d = (char *)&s;
	return (*d);
}
