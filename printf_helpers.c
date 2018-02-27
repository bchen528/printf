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
 * print_di - print integer
 * @arg: argument
 * Return: number of characters printed
 */
int print_di(va_list arg)
{
	int i = 0, j, k = 0,  numlength;
	int n = va_arg(arg, int);
	char *p;
	unsigned int pos_n = 0;

	if (n < 0)
	{
		_putchar('-');
		pos_n = -n;
		k++;
	}
	else
	{
		pos_n = n;
	}
	numlength = digit_count(pos_n);
	p = malloc(sizeof(char) * (numlength));

	while (numlength > 0)
	{
		p[i] = (pos_n % 10) + '0';
		pos_n = pos_n / 10;
		numlength--;
		i++;
	}

	j = i;
	while (j >= 0)
	{
		_putchar(p[j]);
		j--;
	}
	k += numlength;
	free(p);
	return (k);
}
