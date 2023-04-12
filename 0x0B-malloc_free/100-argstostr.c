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
	s = malloc(sizeof(char *) * ac);
	if (s == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < ac; d++)
	{
		s[d] = av[d][0];
	}
	return (s);
}
