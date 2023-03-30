#include "main.h"

/**
 * cap_string - Word
 *
 * Description: Words
 *
 * @str: Parameter
 *
 * Return: Return str
*/
char *cap_string(char *str)
{
	int s = 0;

while (str[s] != '\0')
{
	if (s == 0)
	{
		str[s] = str[s] - 32;
	}
	if ((str[s] >= 32 && str[s] <= 44) ||
	str[s] == 59 || str[s] == 63 ||
	str[s] == '{' || str[s] == '}' ||
	str[s] == '.' || str[s] == '\n' || str[s] == '\t')
	{
		if (str[s + 1] >= 97 && str[s + 1] <= 122)
		{
			str[s] = str[s];
			str[s + 1] = str[s + 1] - 32;
		}
		else
		{
			str[s] = str[s];
		}
	}
	else
	{
		str[s] = str[s];
	}
s++;
}
	return (str);
}

