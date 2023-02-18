#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_digit = (n % 10);
	if (l_digit > 5)
                printf("the last digit of %d is %d and is greater than 5\n", n, l_digit);
	else if (l_digit == 0)
		printf("the last digit of %d is %d and if equal to zero\n", n, l_digit);
	else if (l_digit < 6)
		printf("the last digit of %d is %d and is less than six not zero\n", n, l_digit);

	return (0);
}

