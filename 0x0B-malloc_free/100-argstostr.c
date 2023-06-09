#include <stdlib.h>
#include "main.h"

/**
 * lenght - Lenght
 *
 * @str: Parameter
 *
 * Return: Return lenght
*/
int lenght(char *str)
{
	int d = 0;

	while (str[d] != '\0')
	{
		d++;
	}
	return (d);
}

/**
 * argstostr - Concat
 *
 * @ac: Parameter1
 * @av: Parameter
 *
 * Return: Return pointer
*/
char *argstostr(int ac, char **av)
{
	int d, q = 0, e, r = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < ac; d++)
	{
		q = q + (lenght(av[d]));
	}
	s = malloc(sizeof(char) * q + ac + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < ac; d++)
	{
		for (e = 0; av[d][e] != '\0'; e++, r++)
			s[r] = av[d][e];

		s[r] = '\n';
		r++;
	}
	s[r] = '\0';
	return (s);
}
