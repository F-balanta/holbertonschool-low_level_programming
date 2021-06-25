#include "holberton.h"

/**
 * _isdigit - Is my main function
 * @c: This parameter is necesary
 * Return:(0)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (c);
}
