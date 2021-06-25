#include "holberton.h"
/**
 * print_diagonal- Is a main function
 * @n:This parameter is required
 * Return:(0)
 */
void print_diagonal(int n)
{
	int i, c;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (c = 0; c < n; c++)
			{
				if (i > c)
				{
					_putchar (' ');
				}
				if (i == c)
				{
					_putchar ('\\');
				}
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
