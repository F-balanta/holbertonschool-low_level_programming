#include <stdio.h>
/**
 * *_memset - Write a function that fills memory with a constant byte.
 * @s:external input
 * @b:external input
 * @n:external input
 * Return:char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
