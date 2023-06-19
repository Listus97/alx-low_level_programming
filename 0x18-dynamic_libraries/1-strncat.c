#include "main.h"

/**
 * _strncat - Concatenates two strings but adds a specified number of bytes
 * @dest: The string to be appended upon
 * @src: The string to be added at the end of dest
 * @n: The maximum number of bytes to be appended from src
 *
 * Return: Pointer to the resulting concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
