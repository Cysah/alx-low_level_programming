#include "main.h"

/**
 * _memcpy - A function taht copies a memory area
 *
 * @dest: Memory where is stored
 * @src: Memory where is copied
 * @n: Number of bytes
 * Return: Copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)

		dest[i] = src[i];

	return (dest);
}
