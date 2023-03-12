#include "main.h"

/**
 * _abs - a program that compute the absolute value of an integer
 *
 * @n: argument
 * Return: return the absolute value
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
