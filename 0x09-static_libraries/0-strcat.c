#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: first parameter
 * @src: second parameter
 * Return: pointer to string dest
 */

char *_strcat(char *dest, char *src)
{
	int conc = 0, conc_src = 0;

	while (dest[conc++])
	{
		conc_src++;

	}
	for (conc = 0; src[conc]; conc++)
	{
		dest[conc_src++] = src[conc];
	}
	return (dest);
}

