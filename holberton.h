#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>


typedef struct milk {
	char *id;
	void (*f)(va_list);

} milk_t;

int _putchar(char c);
int _printf(const char *format, ...);
void write_cs(va_list);
void write_per(va_list);

#endif
