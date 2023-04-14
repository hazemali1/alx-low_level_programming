#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print - print
 *
 * @s: Parameter
 *
 * Return: Return d
*/
int print(char *s)
{
	int d = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	return (d);
}

/**
 * error - Error
*/
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _isdigit - Is
 *
 * @s: Parameter
 *
 * Return: Return 0,1
*/
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Main
 *
 * @argc: Parameter1
 * @argv: Parameter2
 *
 * Return: Return 0
*/
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !_isdigit(s1) || !_isdigit(s2))
		error();
	len1 = print(s1);
	len2 = print(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = print(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry = carry + result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry = carry / 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
