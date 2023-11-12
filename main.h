#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**/
typedef struct format
{
	char N;
	int (*_function)(va_list);
} form;


/*TASK 1 functions*/
int _print_Char(va_list args);
int _print_String(va_list args);
int _printf_percent(va_list args);
int _printf_Int(va_list args);

/*_printf module*/
int _printf(const char *format, ...);


#endif