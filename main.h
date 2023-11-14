#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**/
typedef struct format
{
	char s;
	int (*f)(va_list);
} form;


/*TASK 1 functions*/
int _print_Char(va_list args);
int _print_String(va_list args);
int _print_percent(va_list args);
int _print_Int(va_list args);
int _myPutChar(int c);


int _searchFormat(char sf, va_list args);
int _myPutChar(int c);

/*_printf module*/
int _printf(const char *format, ...);


#endif