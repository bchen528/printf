#include "holberton.h"

/**
 * print_c - print characters
 * @arg: argument list to be assessed
 * Return: length of character (1)
 */

int print_c(va_list arg)
{
	char c;

	c =  va_arg(arg, int);

	if (c == '\0')
		return (0);
	_putchar(c);
	return (1);
}

/**
 * print_s - print string
 * @arg: argument list to be assessed
 * Return: length of string
 */
int print_s(va_list arg)
{
	int i = 0;
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_per - print % special character
 * @arg: argument list
 * Return: length of string
 */
int print_per(va_list arg)
{
	if (va_arg(arg, int))
		_putchar(37);
	return (1);
}
