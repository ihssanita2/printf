#ifndef _PRINT_FUN_H
#define _PRINT_FUN_H

/*The standard libreries*/

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/* The functions prototypes : */
int _printf(const char *format, ...);
int _printstring(va_list args);
int _printmodulo(va_list args);
int _printchar(va_list args);
int _putchar(char a);

/* The structers prototype : */

/**
* struct specifier_list - create a list of specifiers.
* @sp_char: the caracter specifier.
* @sp_print_fun: the pointer function.
*/
struct specifier_list
{
char sp_char;
int (*sp_print_fun)(va_list);
};

#endif /*_PRINT_FUN_H*/
