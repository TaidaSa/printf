#include "main.h"

/**
 * _print_String - print string.
 *
 * @args: argument.
 *
 * Return: count of characters.
 */

int _print_String(va_list args)
{
	int i, count = 1;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	if (str[0] == '\0')
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
		count += _myPutChar(str[i]);

	return (count);
}
