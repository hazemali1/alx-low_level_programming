#include "main.h"

/**
 * _isdigit - Character
 *
 * Description: Checks
 *
 * @c: parameter
 *
 * Return: Returns 1,0 (sucess)
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (_isdigit(0));
}
