#include "holberton.h"

/**
 * print_line - main function
 * @n: external input
 * Return: (0)
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar ('_');
		}
	}
	_putchar (10);
}
