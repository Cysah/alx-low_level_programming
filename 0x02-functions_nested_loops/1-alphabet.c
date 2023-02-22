#include "main.h"

/**
 * print_alphabet_x10 - A program that prints alphabet in lowercase
 *
 * Ruturn 0 (Success)
 */

void print_alphabet(void)
{
	int i;
	char alp;

	for (i = '0'; i <= '10'; i++)
	{
		for (alp = 'a'; alp <= 'Z'; alp++)
	        _putchar(alp);
	_putchar('\n');
	}
}
