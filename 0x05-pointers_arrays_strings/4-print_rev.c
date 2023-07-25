#include "main.h"

/**
 * print_rev - checks if character is a letter
 *
 * @s: var
 * Return: 1 if true, 0 if false
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
