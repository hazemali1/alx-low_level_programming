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
	int p = 1, o, f, d = 0;
	char a[1000];

	while (s[d] != '\0')
	{
		d++;
	}
	for (f = d - 1; f >= 0; f--)
	{
		for (o = p - 1; o < p; o++)
		{
		a[o] = s[f];
		}
	p++;
	}
}
