#include "main.h"

/**
 * *_strcpy - checks if character is a letter
 *
 * @dest: var
 * @src: var2
 * Return: 1 if true, 0 if false
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
