#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - is a main function really xd
 * @c: parameter required
 * Return: (0)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
