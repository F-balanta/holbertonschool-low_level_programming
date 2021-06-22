#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit - main check the code for Holberton School students.
 * Return: (0)
 * @n: I need this parameter for this function
 */

int print_last_digit(int n)
{
	int a = (n % 10);

	if (n >= 0)
	{
		_putchar(a + '0');
		return (a);
	}
	else
	{
		a = -a;
		_putchar(a + '0');
		return (a);
	}
	return (a);
}
