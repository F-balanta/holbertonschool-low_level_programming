#include "holberton.h"
/**
 * print_rev- is a Main function
 * @s: is a parameter and pointer
 * Return:(0)
 */
void print_rev(char *s)
{
	int count = 0;
	int i = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar(10);

}
