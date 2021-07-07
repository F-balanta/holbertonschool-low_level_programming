#include "holberton.h"
/**
 * _print_rev_recursion - this function prints the strings in reverse
 * @s:external input
 * Return:(0)
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s[0]);
	}
}
