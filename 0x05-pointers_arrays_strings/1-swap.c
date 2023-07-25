#include "main.h"

/**
 * swap_int - checks if character is a letter
 * @a: var
 * @b: var2
 * Return: 1 if true, 0 if false
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
