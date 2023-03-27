#include "main.h"

/**
 * rev_string - Prinnt
 *
 * Description: Rev
 *
 * @s: Parameter
 *
 * Return: Return 0 (sucess)
*/
void rev_string(char *s)
{
	int p = 1, o, f, d;

	d = _strlen(s);
	for (f = d - 1; f >= 0; f--)
	{
		for (o = p - 1; o < p; o++)
		{
		s[o] = s[f];
		}
	p++;
	}
}
