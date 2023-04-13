#include <stdlib.h>
#include "main.h"

/**
 * size - Size
 *
 * @str: Parameter
 *
 * Return: Return size
*/
int size(char *str)
{
	int size = 0, d = 0;

	while (str[size] != '\0')
	{
		if (str[size] != ' ')
		{
			d++;
		}
	size++;
	}
	return (d);
}

/**
 * strtow - Words
 *
 * @str: Parameter
 *
 * Return: Return words
*/
char **strtow(char *str)
{
	int d = 0, f = 0, r, n, e, o;
	char **s;

	if (str == NULL || *str == '\0' || size(str) == 0)
	{
		return (NULL);
	}
	n = size(str);
	s = (char **)malloc(sizeof(char *) * (n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	s[n] = NULL;
	while (str[d])
	{
		if (str[d] != ' ' && (d == 0 || str[d - 1] == ' '))
		{
			for (r = 1; str[d + r] != ' '; r++)
			s[f] = (char *)malloc(sizeof(char) * (r + 1));
		if (s[f] == NULL)
		{
			for (e = 0; e < f; e++)
				free(s[e]);
			free(s);
			return (NULL);
		}
		for (o = 0; o < r; o++)
		{
			s[f][o] = str[d + 1];
		}
		s[f][o] = '\0';
		f++;
		d = d + r;
		}
		else
			d++;
	}
	return (s);
}
