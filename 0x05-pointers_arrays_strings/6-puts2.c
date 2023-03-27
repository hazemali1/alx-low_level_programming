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
while (*str != '\0' && *str != '\\')
{
	_putchar(*str);
	str = str + 2;
}
_putchar('\n');
}
