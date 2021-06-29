/**
 * _puts - a function that prints a string
 * @str: variable type pointer
 * Return:(0)
 */
#include "holberton.h"
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
