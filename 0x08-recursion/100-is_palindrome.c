#include "main.h"

/**
 * lenght - Lenght
 *
 * @s: Parameter
 *
 * Return: Return lenght
*/
int lenght(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		s++;
		i = i + lenght(s) + 1;
	}
	return (i);
}

/**
 * haha - Compare
 *
 * @s: Parameter1
 * @e: Parameter2
 * @i: Parameter3
 * @q: Parameter4
 *
 * Return: Return 1,0
*/
int haha(char *s, int e, int i, int q)
{
	if (e < q * 2)
	{
		if (s[e] == s[i])
		{
			return (haha(s, e + 1, i - 1, q));
		}
		else if (e > i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}

/**
 * is_palindrome - Palindrome
 *
 * @s: Parameter
 *
 * Return: Return haha
*/
int is_palindrome(char *s)
{
	int i = lenght(s) - 1;

	return (haha(s, 0, i, i));
}
