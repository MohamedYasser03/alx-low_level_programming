#include "main.h"

/**
 * print_most_numbers - checks if character is a letter
 *
 * Return: 1 if true, 0 if false
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 && num == 4)
			continue;
		_putchar(num + 48);
	}
	_putchar('\n');
}
