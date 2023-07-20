#include "main.h"

/**
 * print_numbers - checks if character is a letter
 *
 * Return: 1 if true, 0 if false
*/
void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
		num++;

	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
