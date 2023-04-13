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
		if (str[size] != 32)
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
 * @Return: Return leght
*/
int lenght(char *str)
{
	int size = 0, d = 0;

	while (str[size] != '\0')
	{
		if (str[size] == 32 && str[size + 1] != 32)
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

	if (str == NULL)
	{
		return (NULL);
	}
	s = (char **)malloc(sizeof(char *) * (lenght(str)));
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
		if (str[d] != 32)
		{
			for (; str[d] != 32; d++)
				s[f][r] = str[d];
		}
		s[f][r] = '\0';
	d++;
	}
	s[f][r] = '\0';
	return (s);
}
