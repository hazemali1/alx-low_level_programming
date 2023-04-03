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
	int d = 1, w = 0;

	while (accept[w] != '\0')
	{
		int q = 0;

		while (s[q] != '\0')
		{
			if (s[q] == accept[w])
			{
				d++;
				break;
			}
			q++;
		}
		w++;
	}
	return (d * sizeof(*s));
}
