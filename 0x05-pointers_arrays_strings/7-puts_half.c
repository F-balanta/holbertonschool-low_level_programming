#include "holberton.h"
/**
 * puts_half - function that prints half of a string.
 * @str: external input
 * Return:(0)
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	int n;

	while (str[i] != '\0')
	{
		i++;
	}

	if ((i % 2) == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i + 1) / 2;
	}
	for (j = n; j < i; j++)

		_putchar (str[j]);

	_putchar (10);
}
