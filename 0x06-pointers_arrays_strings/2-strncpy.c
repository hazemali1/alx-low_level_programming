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
	int u;

	for (u = 0; u <= n - 1; u++)
	{
		dest[u] = src[u];
	}
	return (dest);
}
