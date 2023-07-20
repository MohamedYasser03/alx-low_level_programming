#include "main.h"

/**
 * print_diagonal - checks if character is a letter
 *
 * @n: checks input of function
 *
 * Return: 1 if true, 0 if false
*/

void print_diagonal(int n)
{
	int p, s;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (s = 1; s <= p; s++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
