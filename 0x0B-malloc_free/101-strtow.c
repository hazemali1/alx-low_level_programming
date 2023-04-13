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
 * lenght - Lenght
 *
 * @str: Parameter
 *
 * Return: Return leght
*/
int lenght(char *str)
{
	int size = 0, d = 0;

	while (str[size] != '\0')
	{
		if (str[size] == ' ' && str[size + 1] != ' ')
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
	int d, f = 0, r = 0;
	char **s;

	if (str == NULL || *str == '\0' || str == 32)
	{
		return (NULL);
	}
	s = (char **)malloc(sizeof(char *) * (size(str)));
	for (d = 0; d < (lenght(str)); d++)
	{
		s[d] = (char *)malloc(sizeof(char) * (size(str) / lenght(str)));
		if (s[d] == 0)
		{
			return (NULL);
		}
	}
	if (s == 0)
	{
		return (NULL);
	}
	while (str[d] != '\0')
	{
		if (str[d] != ' ')
		{
			for (; str[d] != ' '; d++)
				s[f][r] = str[d];
		}
		s[f][r] = '\0';
	d++;
	}
	s[f][r] = '\0';
	return (s);
}
