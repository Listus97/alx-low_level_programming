#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String to be measured.
 *
 * Return: Length of the string.
 */

int _strlen(char *s)
{
	int count, inc;
	inc = 0;
	for (count = 0; s[count] != '\0'; count++)
	inc++;

	return (inc);
}
