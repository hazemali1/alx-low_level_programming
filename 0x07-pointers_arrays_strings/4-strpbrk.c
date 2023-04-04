#include "main.h"

/**
 * _strpbrk - Function
 *
 * Description: Search
 *
 * @s: Parameter1
 * @accept: Parameter2
 *
 * Return: Return s
*/
char *_strpbrk(char *s, char *accept)
{
	int d = 0, w = 0;

	while (s[w] != '\0')
	{
		int q = 0;

		while (accept[q] != '\0')
		{
			if (s[w] == accept[q])
			{
				return (s + d);
			}
			q++;
		}
		w++;
		d++;
	}
	return ('\0');
}
