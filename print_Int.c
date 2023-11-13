#include "main.h"

/**
 * _print_Int - print int.
 *
 * @args: argument.
 *
 * Return: count of characters.
 */

int _print_Int(va_list args)
{
	int dc = 1, count = 0;
	long int num = va_arg(args, int), numx;

	if (num < 0)
	{
		count += _myPutChar('-');
		num *= -1;
	}

	if (num < 10)
		return (count += _myPutChar(num + '0'))

				   numx = num;

	while (numx > 9)
	{
		dc *= 10;
		numx /= 10;
	}

	while (dc >= 1)
	{
		count += _myPutChar(((num / dc) % 10) + '0');
		dc /= 10;
	}

	return (count);
}
