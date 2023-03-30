#include "main.h"

/**
 * _strcmp - Compare
 *
 * Description: Comparing
 *
 * @s1: Parameter1
 * @s2: Parameter2
 *
 * Return: Return value
*/
int _strcmp(char *s1, char *s2)
{
	int r = 0, s = 0, d;

	while (*s1 != '\0')
	{
		s1++;
		r++;
	}
	while (*s2 != '\0')
	{
		s2++;
		s++;
	}
	if (r < s)
	{
		d = -15;
	}
	else if (r > s)
	{
		d = 15;
	}
	else if (r == s)
	{
		d = 0;
	}
	return (d);
}
