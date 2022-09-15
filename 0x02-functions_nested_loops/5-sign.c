#include "main.h"

/**
 * print_sign -check numbers
 *
 * @n : nmber
 *
 * Return: 0 or 1 or -1
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	_putchar('-');
	return (-1);
}
