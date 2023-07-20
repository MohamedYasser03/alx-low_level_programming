#include "main.h"

/**
 * print_square - checks if character is a letter
 *
 * @size: size
 *
 * Return: 1 if true, 0 if false
*/

void print_square(int size)
{
	int row, column;


	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
