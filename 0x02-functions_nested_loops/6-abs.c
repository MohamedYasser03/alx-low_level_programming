#include "main.h"

/**
 * _abs - checks if character is a letter
 *              both lowercase or uppercase
 * @n: checks input of function
 *
 * Return: always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
