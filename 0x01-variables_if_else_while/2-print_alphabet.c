#include <stdio.h>

/**
 * main - A program that print alphabet
 * Return: 0 (Success)
 */
 int main()
{
	char alp;
	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	putchar('\n');

	return 0;
