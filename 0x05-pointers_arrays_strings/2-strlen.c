#include "main.h"
/**
 * _strlen - checks the lentth
 * @s: this is the string
 *
 * Return: int length
 */


int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
