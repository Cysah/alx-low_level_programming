#include "main.h"

/**
 * print _alphabet_x10 - Print the alphabet 10x
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}

