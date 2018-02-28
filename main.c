#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
/*	unsigned int ui;*/
	len = _printf("Percent:[%%]\n");
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Percent:[%%]\n");
/*	ui = (unsigned int)INT_MAX + 1024;*/

/* c and s test cases */
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");

/* i and d test cases */
	_printf("Length:[%d, %d]\n", 1024, -1024);
	printf("Length:[%d, %i]\n", 2500, 2500);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("max:[%d]\n", INT_MAX);
	printf("max:[%d]\n", INT_MAX);
	_printf("min:[%d]\n", INT_MIN);
	printf("min:[%d]\n", INT_MIN);

/*advanced test cases*/
/*	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
	return (0);
}
