#include "main.h"

/**
 * _strstr - Locates the first occurrence of a substring
 * within a string.
 *
 * Description: This function finds the first occurrence
 * of the substring 'needle' within the string 'haystack'.
 * The terminating null bytes ('\0') are not compared.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 * Return: Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
