#include "main.h"

/**
 * /**
 * _memset - Fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 * @s: Pointer to the target memory area
 * @b: Constant byte to be filled
 * @n: Number of bytes to be filled
 *
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
