#include "main.h"

/**
 * _memset - A program that fills memory with constant byte
 *
 * @s: A pointer to the memory area to be filled
 * @b: The character needed to fill the memory area with
 * @n: The number of bytes that need to be filled
 * Return: A pointer to the filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
