#include "main.h"

/**
 * _isalpha - Checks
 *
 * Description: Checks alphabet
 *
 * @c: description of parameter c
 *
 * Return: Return 0 (sucess)
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}
	else
{
	return (0);
}
	_putchar('\n');
	return (_isalpha(0));
}

