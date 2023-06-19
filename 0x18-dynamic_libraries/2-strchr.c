#include "main.h"
#include <stddef.h>

/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character 'c' in the string 's', or NULL if the
 * character is not found.
 * @s: Targeted string
 * @c: Targeted character
 *
 * Return: Pointer to the first occurrence of 'c'
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
