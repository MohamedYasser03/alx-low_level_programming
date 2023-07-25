#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - checks if character is a letter
 *
 * Return: 1 if true, 0 if false
*/

int main(void)
{
	int sum;
	char c;

	stand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 120;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
