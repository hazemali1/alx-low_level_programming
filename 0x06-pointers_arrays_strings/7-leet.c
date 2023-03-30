#include "main.h"

/**
 * leet - Word
 *
 * Description: Words
 *
 * @s: Parameter
 *
 * Return: Return s
*/
char *leet(char *s)
{
	int d = 0, r;
	char w[] = { 'a', 'e', 'o', 't', 'l' };
	char u[] = { 'A', 'E', 'O', 'T', 'L' };
	char q[] = { 4, 3, 0, 7, 1 };

	while (s[d] != '\0')
	{
		for (r = 0; r < 5; r++)
		{
		if (s[d] == w[r] || s[d] == u[r])
		{
			s[d] = q[r] + '0';
		}
		}
	d++;
	}
return (s);
}
