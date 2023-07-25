#include "main.h"

/**
 * puts_half - checks if character is a letter
 *
 * @str: var
 * Return: 1 if true, 0 if false
*/

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
