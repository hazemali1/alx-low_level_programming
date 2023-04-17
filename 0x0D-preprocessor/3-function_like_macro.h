#ifndef MACRO_H
#define MACRO_H
include "main.h"

/**
 * ABS - Absolute
 *
 * @x: Parameter
 *
 * Return: Return absoilute
*/
int ABS(int x)
{
	if (x < 0)
	{
		x = x * (-1);
	}
	return (x);
}
#endif
