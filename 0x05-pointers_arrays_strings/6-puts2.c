#include "main.h"

/**
 * puts2 - checks if character is a letter
 *
 * @str: var
 * Return: 1 if true, 0 if false
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
