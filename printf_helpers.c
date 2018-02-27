#include "holberton.h"
#include <stdio.h>
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

/**
 * digit_count - find number of digits in integer
 * @n: integer to be assessed
 * Return: number of digits
 */
int digit_count(int n)
{
	int count = 0;

	while (n > 0 || n < 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

/**
 * print_d - print integer
 * @arg: argument
 * Return: number of characters printed
 */
int print_d(va_list arg)
{
	int i = 0, j, numlength;
	int n = va_arg(arg, int);
	char *p;

	numlength = digit_count(n);
	p = malloc(sizeof(char) * (numlength));

	while (numlength > 0)
	{
		p[i] = (n % 10) + '0';
		n = n / 10;
		numlength--;
		i++;
	}

	j = i;
	while (j >= 0)
	{
		_putchar(p[j]);
		j--;
	}
	free(p);
	return (numlength);
}
