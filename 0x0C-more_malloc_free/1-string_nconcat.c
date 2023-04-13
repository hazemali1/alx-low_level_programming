#include <stdlib.h>
#include "main.h"

/**
 * lenght - Lenght
 *
 * @s1: Parameter
 *
 * Return: Return lenght
*/
int lenght(char *s1)
{
	int s = 0;

	while (s1[s] != '\0')
	{
		s++;
	}
	return (s);
}

/**
 * string_nconcat - Concatenates
 *
 * @s1: Parameter1
 * @s2: Parameter2
 * @n: Parameter3
 *
 * Return: Return Pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int d;
	unsigned int e, r = 0;

	d = lenght(s1);
	s = malloc((sizeof(*s) * (n + d)) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (e = 0; e < (n + d); e++)
	{
		if (e < d)
		{
			s[e] = s1[e];
		}
		else if (r <= n)
		{
			s[e] = s2[r];
			r++;
		}
	}
	s[e] = '\0';
	return (s);
}
