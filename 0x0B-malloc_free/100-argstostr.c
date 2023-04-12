#include <stdlib.h>
#include "main.h"
/**
 * lenght - Lenght
 *
 * @ac: Parameter1
 * @av: Parameter2
 *
 * Return: Return lenght
*/

/**
 * argstostr - Concat
 *
 * @ac: Parameter1
 * @av: Parameter
 *
 * Return: Return pointer
*/
int lenght(int ac, char **av)
{
	int s, q = 0;

	for (s = 0; s < ac; s++)
	{
		while (*av[s] != '\0')
		{
			q++;
			*av++;
		}
	}
	return (q);
}
char *argstostr(int ac, char **av)
{
	int d, q;

	q = lenght(ac, **av);
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(*s) * q);
	if (s == NULL)
	{
		return (NULL);
	}
	for (d = 0; d < ac; d++)
	{
		s[d] = av[d];
	}
	return (s);
}
