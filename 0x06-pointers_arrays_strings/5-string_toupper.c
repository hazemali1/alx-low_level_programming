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
	int s = 0;

while (str[s] != '\0')
{
	if (str[s] >= 97 && str[s] <= 122)
	{
		str[s] = str[s] - 32;
	}
	s++;
}
	return (str);
}
