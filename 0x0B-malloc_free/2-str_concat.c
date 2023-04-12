#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concat
 *
 * @s1: Parameter
 * @s2: Parameter
 *
 * Return: Return pointer
*/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int d = 0, e, w = 0, u = 0;

	while (s1[d] != '\0')
	{
		d++;
	}
	if (d == 0)
	{
		*s1 = 0;
	}
	while (s2[w] != '\0')
	{
		w++;
	}
	if (w == 0)
	{
		*s2 = 0;
	}
	s = (char *)malloc((sizeof(char) * (d + w)) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (e = 0; e < (d + w); e++)
	{
		if (e < d)
		{
		s[e] = s1[e];
		}
		else
		{
		s[e] = s2[u];
		u++;
		}
	}
	return (s);
}
