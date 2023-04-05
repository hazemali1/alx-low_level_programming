#include "main.h"

/**
 * _strlen_recursion - Lengh
 *
 * @s: Parameter
 *
 * Return: Return lengh
*/
int _strlen_recursion(char *s)
{
	int d = 0;

	if (*s != '\0')
	{
		s++;
		d = d + _strlen_recursion(s) + 1;
	}
	return (d);
}
