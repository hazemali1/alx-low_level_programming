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
	while (s2[w] != '\0')
	{
		w++;
	}
	s = malloc((sizeof(*s) * d) + 1);
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
