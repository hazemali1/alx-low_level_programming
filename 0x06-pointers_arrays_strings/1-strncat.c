#include "main.h"

/**
 * _strncat - Conect
 *
 * Description: Conection
 *
 * @dest: Parameter1
 * @src: Parameter2
 * @n : Parameter3
 *
 * Return: Return dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int d = 0, r = 0, u;
	char *e, *w;

	e = dest;
	w = src;
	while (*w != '\0')
	{
		w++;
		r++;
	}
	while (*e != '\0')
	{
		e++;
		d++;
	}
	for (u = 0; u <= n - 1; u++)
	{
		if (u <= r)
		{
		dest[d] = src[u];
		d++;
		}
	}
	return (dest);
}
