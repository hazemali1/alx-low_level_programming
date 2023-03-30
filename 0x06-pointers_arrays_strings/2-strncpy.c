#include "main.h"

/**
 * _strncpy - Copy
 *
 * Description: Copies
 *
 * @dest: Parameter1
 * @src: Parameter2
 * @n: Parameter3
 *
 * Return: Return dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int r = 0;

	while (src[r] != '\0' && r < n)
	{
		dest[r] = src[r];
		r++;
	}
	while (n > r)
	{
		dest[r++] = '\0';
		r++;
	}
	return (dest);
}
