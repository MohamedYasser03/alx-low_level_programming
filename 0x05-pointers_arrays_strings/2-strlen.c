#include "main.h"

/**
 * _strlen - checks if character is a letter
 * @s: var
 * Return: 1 if true, 0 if false
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
