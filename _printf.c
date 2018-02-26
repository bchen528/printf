#include "holberton.h"

/**
 * _printf - structure for chars, strings, %
 * @format: A string passed through the argument to print.
 *
 * Return: (length of the printed string without the null byte).
 */
int _printf(const char *format, ...)
{
	int i, j;
	va_list list;

	va_start(list, format);

	milk_t milk[] = {
		{"c", print_cs},
		{"s", print_cs},
		{"%", print_per},
		{NULL, NULL}
	};

	for (i = 0; format[i] != '\0'; i++)
	{
		for (j = 0; milk[j].id != '\0'; j++)
		{
			_putchar(format[i]);
			if (format == '%')
				milk[j].f(list);
			j++;
		}

		i++;
	}

	va_end(list);

	return (_strlen(format));
}
