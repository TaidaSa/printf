#include "main.h"

/**
 * _searchFormat - function specifiers.
 *
 * @sf: search format.
 * @args: arguments.
 *
 * Return: characters count.
 */

int _searchFormat(char sf, va_list args)
{
	int i = 0, funCount = 0;

	form arrFormat[] = {
			{'s', _print_String},
			{'c', _print_Char},
			{'d', _print_Int},
			{'%', _print_percent}};

	while (arrFormat[i].f)
	{
		if (sf == arrFormat[i].f)
			funCount += arrFormat[i].f(args);
		i++;
	}

	if (funCount == 0)
	{
		funCount += _myPutChar('%');
		funCount += _myPutChar(sf);
	}

	return (funCount);
}
