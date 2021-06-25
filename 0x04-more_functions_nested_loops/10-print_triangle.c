/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: external input
 * Return: 0;
 */
#include "holberton.h"
void print_triangle(int size)
{
	int x, y, r;

	if (size <= 0)
	{
		_putchar(10);
	}

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			r = size - x;
			if (y <= r)
			{
				_putchar (' ');
			}
			else
			{
				_putchar ('#');
			}
		}
		_putchar (10);
	}
}
