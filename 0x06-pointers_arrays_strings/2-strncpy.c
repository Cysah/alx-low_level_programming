#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: first parameter
 * @src: second parameter
 * @n: n parameter
 * Return: the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cpy_str = 0;
	int char_str = 0;

	while (src[cpy_str++])
	{
		char_str++;
	}
	for (cpy_str = 0; src[cpy_str] && cpy_str < n; cpy_str++)
	{
		dest[cpy_str] = src[char_str];

		for (index = char_str; cpy_str < n; cpy_str++)
		{
			dest[cpy_str] = '\0';
		}
	}
	return (dest);
}
