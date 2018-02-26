#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - Returns an integer inside an array
 * @s: pointer with address variable from str.
 *
 * Return: init (An integer contained in an array)
 */
int _strlen(char *s)
{
	int init;

	for (init = 0; s[init] != '\0'; init++)
	{
	}

	return (init);

}

/**
 * print_cs - Prints additional arguments containing a char or string.
 * @va_list: Additional arguments passed through _printf.
 *
 */
void print_cs(va_list) //Let's review what the helper functions do
{
	char *cs;

	cs = va_arg(list, char*);
	_putchar(cs);
}

/**
 * print_per - Prints additional arguments containing a percent.
 * @va_list: Additional arguments passed through _printf.
 *
 */
void print_per(va_list)
{
	char *cs;
	cs = va_arg(list, char*);
	_putchar(cs);
}
