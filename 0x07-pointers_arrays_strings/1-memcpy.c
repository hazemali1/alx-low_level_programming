#include "main.h"

/**
 * _memcpy - Function
 *
 * Description: Copies
 *
 * @dest: Parameter1
 * @src: Parameter2
 * @n: Parameter3
 *
 * Return: Return dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d, w;

	w = (n * sizeof(*dest));
	for (d = 0; d < w; d++)
	{
		dest[d] = src[d];
	}
	return (dest);
}
