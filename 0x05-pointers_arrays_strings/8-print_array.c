#include "main.h"

/**
 * print_array - checks if character is a letter
 *
 * @a: var
 * @n: var2
 * Return: 1 if true, 0 if false
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf('\n');
}
