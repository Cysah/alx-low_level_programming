#include "main.h"

/**
 * _abs - a program that compute the absolute value of an integer
 *
 * @int: function parameter
 * Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
