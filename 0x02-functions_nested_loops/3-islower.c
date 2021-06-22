#include "holberton.h"
/**
 * _islower - main check the code for Holberton School students.
 * Return: (0)
 * @c: I need this parameter for this function
 */
int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
