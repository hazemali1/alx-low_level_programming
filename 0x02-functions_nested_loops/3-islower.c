#include "main.h"

/**
 * _islower - Checks
 *
 * Description: Checks alphabet
 *
 * @c: description of parameter c
 *
 * Return: Return 0 (sucess)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else
{
	return (0);
}
	_putchar('\n');
	return (_islower(0));
}
