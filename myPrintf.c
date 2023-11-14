#include "main.h"

/**
 * _printf - Emulate the original.
 *
 * @format: Format by specifier.
 *
 * Return: count of chars.
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, fCount = 0;
	va_list charList;

	va_start(charList, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
			{
				count = -1;
				break;
			}
			fCount = _searchFormat(format[i + 1], charList);
			if (fCount == 0)
				count += _myPutChar(format[i + 1]);
			if (fCount == -1)
				count = -1;
			i++;
		}
		else
		{
			(count == -1) ? (_myPutChar(format[i])) : (count += _myPutChar(format[i]));
		}
		i++;
		if (count != -1)
			count += fCount;
	}

	va_end(charList);

	return (count);
}
