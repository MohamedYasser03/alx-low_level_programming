#include "main.h"

/**
 * print_line - checks if character is a letter
 *
 * @n: checks input of function
 *
 * Return: 1 if true, 0 if false
*/

void print_line(int n)
{
	int ln;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
			_putchar('_');
		_putchar('\n');
	}
}
