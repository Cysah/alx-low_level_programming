#include "main.h"

/**
 * main - Print the alphabet 10x
 *
 * Return: 0 (Success)
 */
int main(void)
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

