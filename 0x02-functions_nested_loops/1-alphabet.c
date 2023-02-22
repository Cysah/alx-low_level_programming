#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Ruturn 0 (Success)
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');

}
