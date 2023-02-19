#include <stdio.h>

/**
 * main - alphabets in lower case
 *
 * Return: 0 (Success)
 */

int main(void)
{

	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{

	if (alp == 'q' || alp == 'e')
		continue;
	putchar(alp);
	}	

	putchar('\n');
	return (0);

}

