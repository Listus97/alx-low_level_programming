#include "main.h"

/**
 * _puts - prints a string
 * @str: string to print
 * 
 * Description: This function prints a string.
 * It takes a string as input and displays it on the standard output.
 *
 * Return: The number of characters printed.
 */

void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
