#include "main.h"

/**
 * _atoi - Atoi
 *
 * Description: Print
 *
 * @s: Parameter
 *
 * Return: Return 0 (sucess)
*/
int _atoi(char *s)
{
	int d = 0, e = 0;

	while (s[d] != '\0')
	{
		if (s[d] >= 0 && s[d] <= 9)
		{
			s[e] = s[d];
		}
	d++;
	e++;
	}
	return (1);
}
