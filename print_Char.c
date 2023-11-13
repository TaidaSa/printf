#include "main.h"

/**
 * _print_Char - print a character function.
 *
 * @arg: arguments.
 *
 * Return: the lenth of the char that has been printed.
 */

int _print_Char(va_list arg)
{

	char c = va_arg(arg, int);

	_myPutChar(c);

	return (1);
}
