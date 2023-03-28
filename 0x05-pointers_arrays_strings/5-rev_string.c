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
	int f = 0, d = 0;
	char c;

	while (s[d++])
		f++;
	for (d = f - 1; d >= f / 2; d--)
	{
		c = s[d];
		s[d] = s[f - d - 1];
		s[f - d - 1] = c;
	}
}
