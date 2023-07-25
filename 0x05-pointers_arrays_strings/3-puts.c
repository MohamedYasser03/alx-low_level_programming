#include "main.h"

/**
 * _puts - checks if character is a letter
 *
 * @str: var
 * Return: 1 if true, 0 if false
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
