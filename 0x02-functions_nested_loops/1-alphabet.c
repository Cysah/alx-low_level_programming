#include "main.h"

/**
 * print_alphabet - A program that prints alphabet in lowercase
 *
 * Ruturn 0 (Success)
 */

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'Z')
	{
	        _putchar(alp);
		alp++;
	}
	_putchar('\n');

}
