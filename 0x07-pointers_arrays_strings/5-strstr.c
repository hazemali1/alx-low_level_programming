#include "main.h"

/**
 * _strstr - Function
 *
 * Description: Compare
 *
 * @haystack: Parameter1
 * @needle: Parameter2
 *
 * Return: Return haystack
*/
char *_strstr(char *haystack, char *needle)
{
	int d = 0, w = 0;

	while (haystack[w] != '\0')
	{
		int q = 0;

		while (needle[q] >= '\0')
		{
			int l = w, o = 0;

			while (haystack[l] == needle[o])
			{
				if (needle[o] != '\0')
				{
					l++;
					o++;
				}
				else
				{
					return (haystack + d);
				}
			}
			q++;
		}
		w++;
		d++;
	}
	return ('\0');
}
