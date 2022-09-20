#include "main.h"

/**
 * _puts - print string
 * @str: pointer for string
 *
 * Return: 0
 */
void _puts(char *str)
{
	int i = 0;








while (*(str + i) != '\0')
{
putchar(*(str + i));
i++;
}
putchar(10);
}


