#include "holberton.h"
/**
 * rev_string - is a principal function
 * @s: is a pointer - parameter
 * Return: char
 */
void rev_string(char *s)
{
	char *i = s;
	char j;

	while (*i)
		i++;

	i = i - 1;

	while (s < i)
	{
		j = *s;
		*s++ = *i;
		*i-- = j;
	}
}
