#include "main.h"

/**
 * print_rev_recursion - function that ptints a string in reverse
 *
 * @s: parameter string
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
