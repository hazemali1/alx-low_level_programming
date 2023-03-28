#include "main.h"

/**
 * _strcpy - Copies
 *
 * Description: Copies
 *
 * @dest: Parameter
 * @src: Parameter
 *
 * Return: Return 0 (sucess)
*/
char *_strcpy(char *dest, char *src)
{
	if (*dest == '\0')
	{
	*dest = *src;
	}
	else
	{
	dest[0] = src;
	}
	return (src);
}
