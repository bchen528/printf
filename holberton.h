#ifndef TEA
#define TEA
#include <stdarg.h>
#include <unistd.h>
/**
 * struct milk - structure for chars, strings, %
 * @id: character representing datatype or special character %
 * @f: print function for specific datatype/character
 * 
 * Description: struct milk contains characters c, s, %
 * that represent datatypes/special character and function
 * pointers that point to a putchar function for
 * corresponding datatype
 */
typedef struct milk
{
	char *id;
	int (*f)(va_list);
} milk_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_cs(va_list);
int print_per(va_list);
#endif /*TEA*/
