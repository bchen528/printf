# printf

An emulation of the printf function without the use of the C standard library.

## Examples
**String**
  * Input
  `_printf("String:[%s]\n", "I am a string !");`
  * Output
  `String:[I am a string !]`
  
**Character**
  * Input
  `_printf("Character:[%c]\n", 'H');`
  * Output
  `Character:[H]`
  
**Integer**
  * Input
  ```
  int len;
  len = _printf("Let's try to printf a simple sentence.\n");
  _printf("Length:[%d, %i]\n", len, len);
  ```
  * Output
  `Length:[39, 39]`

**Percent**
  * Input
  `_printf("Percent:[%%]\n");`
  * Output
  `Percent:[%]`

## Requirements
  * All files will be compiled on Ubuntu 14.04 LTS
  * No global variables
  * Allowed functions and macros:
      * `write` (man 2 write)
      * `malloc` (man 3 malloc)
      * `free` (man 3 free)
      * `va_start` (man 3 va_start)
      * `va_end` (man 3 va_end)
      * `va_copy` (man 3 va_copy)
      * `va_arg` (man 3 va_arg)
  
  
## File Descriptions
* [0_printf.c](0_printf.c) - contains custom `_printf` function
  * `_printf` - prints to standard output according to input format
* [printf_helpers.c](printf_helpers.c) - contains helper functions for `_printf`
  * `print_c` - print characters
  * `print_s` - print strings
  * `print_per` - print % special character
  * `digit_count` - count number of digits in an integer
  * `print_di` - print integer

## Compilation
```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

## Authors

* Brian Chew | [GitHub](https://github.com/zabimaru1000) | [Twitter](https://twitter.com/bh_chew)
* Becky Chen | [GitHub](https://github.com/bchen528) | [Twitter](https://twitter.com/bchen803)
