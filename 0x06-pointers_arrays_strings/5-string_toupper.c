#include "main.h"

/**
 * string_toupper - Change
 *
 * Description: Changing
 *
 * @str: Parameter
 *
 * Return: Return str
*/
char *string_toupper(char *str)
{
while (*str != '\0')
{
	if (*str >= 97 && *str <= 122)
	{
		*str = *str - 32;
	}
	str++;
}
	return (str);
}
