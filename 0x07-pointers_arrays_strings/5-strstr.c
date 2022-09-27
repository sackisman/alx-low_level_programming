#include "main.h"



/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: string to work on
 * @needle: substring to match
 * Return: pointer to the first match or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		index = 0;
		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);
				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}
