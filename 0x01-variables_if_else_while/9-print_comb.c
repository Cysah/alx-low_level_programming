#include <stdio.h>

/**
 * main - print combinations of sinlge digit
 *
 * Return: 0 (Success)
 */
int main(void)
{

	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar (' ');
		}
		       ++n;
	}

	putchar('\n');
	return (0);
}

