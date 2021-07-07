#include "holberton.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s:external input
 * Return:(0)
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (_strlen_recursion(1 + s) + 1);
	return (0);
}
