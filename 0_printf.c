#include "holberton.h"

/**
 * _printf - products output according to format
 * @format: format string
 * Return: number of characters printed, excluding \0
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, j = 0;
	int nchar = 0;
	milk_t milk[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_per},
		{"d", print_d},
/*		{"i", print_i}*/
		{NULL, NULL}
	};

	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (milk[j].id != NULL)
			{
				if (*milk[j].id == format[i])
					nchar += milk[j].f(arg);
				j++;
			}
			i++;
		}
		_putchar(format[i]);
		nchar++;
		i++;
		j = 0;
	}
	va_end(arg);
	return (nchar);
}
