#include "main.h"
#include <stdio.h>

/**
  * _abs - Absolute
  *
  * Description: Absolute
  *
  * @s: Parameter
  *
  * Return: Return 0 (sucess)
 */
int _abs(int s)
{
	if (s < 0)
	{
		s = s * -1;
		_putchar(s);
	}
	else
	{
		_putchar(s);
	}
	_putchar('\n');
	return (_abs(0));
}
