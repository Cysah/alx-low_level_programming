#include <stdio.h>

/**
 * main - a program that print lowercase
 *
 * Return 0 (Success)
 */
int main(void)
{

	int numb;

	for(numb = 9; numb >= 0; numb--)
	{
		putchar(numb + '0');
	}
	putchar('\n');
}
