#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse order
 * @s: The string to be printed.
 * Return: the string.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
