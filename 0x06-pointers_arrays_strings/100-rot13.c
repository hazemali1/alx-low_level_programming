#include "main.h"

/**
 * rot13 - Word
 *
 * Description: Words
 *
 * @s: Parameter
 *
 * Return: Return s
*/
char *rot13(char *s)
{
	int r;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *p;

	p = s;
	while (*s != '\0')
	{
		for (r = 0; r < 53; r++)
		{
			if (*s == a[r])
			{
			*s = b[r];
			break;
			}
		}
		s++;
	}
return (p);
}
