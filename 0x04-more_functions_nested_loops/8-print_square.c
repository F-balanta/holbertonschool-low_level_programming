#include "holberton.h"
/**
 * print_square- Is a main function
 * @size: Required this parameter
 * Return:(0)
 */
void print_square(int size)
{
	int i, c;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar ('#');
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
