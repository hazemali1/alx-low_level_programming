#include <stdlib.h>
#include "main.h"

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
	int d;
	char **s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	s = (char **)malloc(sizeof(char *) * ac);
	for (d = 0; d < ac; d++)
	{
		s[d] = (char *)malloc(sizeof(char) * 9);
		if (s[d] == NULL)
		{
			return (NULL);
		}
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < ac; d++)
	{
		s[d][9] = av[d];
	}
	return (s);
}
