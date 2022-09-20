#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two
 * @a:first int
 * @b: second
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}

