#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes the character c stdout
 * @c: The character to print
 *
 * Return: On Success 1.
 *		On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
