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
	if ((str[s] == ' ' || str[s] == '\n' || str[s] == ',' || str[s] == '\t' || str[s] == ';' || str[s] == '.' || str[s] == '!' || str[s] == '?' || str[s] == '"' || str[s] == '(' || str[s] == ')' || str[s] == '{' || str[s] == '}') && (str[s + 1] >= 97 && str[s + 1] <= 122))
	{
		str[s] = str[s];
		str[s + 1] = str[s + 1] - 32;
	}
	else

	{
		str[s] = str[s];
	}
s++;
}
	return (str);
}

