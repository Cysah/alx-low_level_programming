#include "main.h"

/**
 * _strcmp - function that compares two strings
 * s1: first parameter to be compared
 * @s2: second parameter to be compared
 * Return: positive value, negative value, and zero
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
