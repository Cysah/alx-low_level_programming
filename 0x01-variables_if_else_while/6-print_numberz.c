#include <stdio.h>

/**
 * main - enrty level
 *
 * Return 0 (Success)
 */

int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
	
		putchar(numb + '0');

	}	
	putchar('\n');
	return (0);
}	
