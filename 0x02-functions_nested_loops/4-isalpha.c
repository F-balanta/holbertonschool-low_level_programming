#include "holberton.h"
/**
 * _isalpha -  main check the code for Holberton School students.
 * Return: (0)
 * @c: I need this parameter for this function
 */
int _isalpha(int c)

{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
