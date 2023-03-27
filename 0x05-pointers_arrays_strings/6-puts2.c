#include "main.h"

/**
 * puts2 - Prinnt
 *
 * Description: Rev
 *
 * @str: Parameter
 *
 * Return: Return 0 (sucess)
*/
void puts2(char *str)
{
	int r = 0;

while (*str != '\0')
{
	if (r < 223)
	{
	_putchar(*str);
	}
	str = str + 2;
	r++;
}
_putchar('\n');
}
