#include "main.h"

/**
 * _strstr - function that finds the first occurence of the substring
 * needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *
 * @haystack: string where the search is made
 * @needle: string whose occurenceis searched in haystack
 * Return: pointer to the beggining of the located substring, ot NULL
 * if the sustring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
