#include "main.h"

/**
 * _islower - Checks
 * 'c' - Parameter
 *
 * Description: Checks alphabet
 *
 * Return: Return 0 (sucess)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
{
	return (1);
}
	else if (c >= 65 && c <= 90)
{
	return (0);
}
	_putchar('\n');
	return (_islower(0));
}
