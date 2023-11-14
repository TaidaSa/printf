#include "main.h"

/**
 * _print_percent - simple function to print %.
 *
 * @args: unused argument.
 * Return: On success 1.
 */

int _print_percent(va_list args)
{
	(void)args;
	_myPutChar('%');

	return (1);
}
