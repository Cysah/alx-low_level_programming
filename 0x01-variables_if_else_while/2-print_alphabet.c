#include <stdio.h>

/**
 * main - a program that print alphabet
 *
 * Return: 0 (Success)
 */
 int main(void)
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
