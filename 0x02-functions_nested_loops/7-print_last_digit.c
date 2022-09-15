#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit -main last digit
 *
 * @n: integer to last
 *
 * Return: last
 */

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
