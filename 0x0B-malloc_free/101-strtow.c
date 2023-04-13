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
	int size, d = 0;

	for (size = 0; str[size]; size++)
	{
		if (str[size] == ' ')
		{
			if (str[size + 1] != ' ' && str[size + 1] != '\0')
				d++;
		}
		else if (size == 0)
			d++;
	}
	d++;
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
	int d, f = 0, r, n = 0, e, o;
	char **s;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = size(str);
	if (n == 1)
		return (NULL);
	s = (char **)malloc(sizeof(char *) * n);
	if (s == NULL)
		return (NULL);
	s[n - 1] = NULL;
	d = 0;
	while (str[d])
	{
		if (str[d] != ' ' && (d == 0 || str[d - 1] == ' '))
		{
			for (r = 1; str[d + r] != ' ' && str[d + r]; r++)
				;
			r++;
			s[f] = (char *)malloc(sizeof(char) * r);
			r--;
		if (s[f] == NULL)
		{
			for (e = 0; e < f; e++)
				free(s[e]);
			free(s[n - 1]);
			free(s);
			return (NULL);
		}
		for (o = 0; o < r; o++)
			s[f][o] = str[d + o];
		s[f][o] = '\0';
		f++;
		d = d + r;
		}
		else
			d++;
	}
	return (s);
}
