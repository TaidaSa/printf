#include "main.h"

/**
 * _myPutChar - a simple func to write one char
 * @c: The character to print
 * Return: On success 1.
*/

int _myPutChar(int c)
{
	return (write(1, &c, 1));
}
