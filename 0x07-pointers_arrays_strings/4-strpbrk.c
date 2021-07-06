#include "holberton.h"
/**
 * *_strpbrk - Write a function that searches a string for any of a setofbytes.
 * @s:external input
 * @accept:external input
 * Return:(0)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (accept[i] == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
