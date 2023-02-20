#include <stdio.h>

/**
 * main - a program that print lowercase
 *
 * Return 0 (Success)
 */
int main(void)
{

	char a;

	for(a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
