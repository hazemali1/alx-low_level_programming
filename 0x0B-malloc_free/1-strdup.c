#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy
 *
 * @str: Parameter
 *
 * Return: Return pointer
*/
char *_strdup(char *str)
{
	char *s;
	int d = 0, e;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[d] != '\0')
	{
		d++;
	}
	s = malloc((sizeof(*str) * d) + 1);
	if (s == 0)
	{
		return (NULL);
	}
		for (e = 0; e < d; e++)
		{
			s[e] = str[e];
		}
	return (s);
}
