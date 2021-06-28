/**
 * puts2 - prints every other character of a string.
 * @str: external input
 * return:(0)
 */
#include "holberton.h"
void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j = j + 2)
	{
		_putchar (str[j]);
	}
	_putchar (10);


}
