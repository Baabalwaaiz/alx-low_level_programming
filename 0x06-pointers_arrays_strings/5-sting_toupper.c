#include "main.h"
#include <stdio.h>
/**
 * _strstr - Changes all lowercases of a string to uppercases
 * @haystack: Array to be searched
 * @meedle: Target string
 * Return: Always zero
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;

			if (needle[i + j] == '\0')
				return (haystack + i);
		}
	}

	return ('\0');
}
