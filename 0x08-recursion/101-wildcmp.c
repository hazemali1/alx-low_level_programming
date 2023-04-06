#include "main.h"

/**
 * lenght - Lenght
 *
 * @s: Parameter
 *
 * Return: Return lenght
*/
int lenght(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		s++;
		i = i + lenght(s) + 1;
	}
	return (i);
}

/**
 * wildcmp - Checking
 *
 * @s1: Parameter1
 * @s2: Parameter2
 *
 * Return: Return 1,0
*/
int wildcmp(char *s1, char *s2)
{
	int s = lenght(s1) - 1;
	int d = lenght(s2) - 1;

	if (s2[d] != '*' && s2[d] != s1[s])
	{
		return (0);
	}
	if (s2[0] != '*' && s2[1] != '*' && s2[1] != s1[1])
	{
		return (0);
	}
	return (1);
}
