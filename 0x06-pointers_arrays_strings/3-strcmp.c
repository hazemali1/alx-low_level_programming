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
	int d, f = 0, r = 0, o = 0;

	while (s1[f] != '\0')
	{
	if (s1[r] == s2[o])
	{
	r++;
	o++;
	}
	if (s1[r] != s2[o])
	{
		d = s1[r] - s2[o];
	}
	f++;
	}
	return (d);
}
