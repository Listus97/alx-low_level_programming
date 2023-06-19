#include "main.h"

/**
 * _isupper - checks whether a character is uppercase or not
 * @c: the character to be tested
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
