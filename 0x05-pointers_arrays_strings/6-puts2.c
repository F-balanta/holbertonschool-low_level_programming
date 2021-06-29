#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - This function that prints every other character of a string.
 * @str: This parameter contain the string
 */
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
