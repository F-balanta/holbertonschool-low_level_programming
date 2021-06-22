#include "holberton.h"
/**
 * print_sign - main check the code for Holberton School students.
 * Return: (0)
 * @n: I need this parameter for this function
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
