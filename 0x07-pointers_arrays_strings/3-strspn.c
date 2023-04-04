#include "main.h"

/**
 * _strspn - Function
 *
 * Description: Lenght
 *
 * @s: Parameter1
 * @accept: Parameter2
 *
 * Return: Return lenght
*/
unsigned int _strspn(char *s, char *accept)
{
	int d = 0, w = 0;

	while (accept[w] != '\0')
	{
		int q = 0;

		while (s[q] != '\0' && s[q] != 32)
		{
			if (s[q] == accept[w])
			{
				d++;
			}
			q++;
		}
		w++;
	}
	return (d);
}
