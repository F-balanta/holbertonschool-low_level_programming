#include "holberton.h"
/**
 * *_strchr - Write a function that locates a character in a string.
 * @s:external input
 * @c:external input
 * Return:char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
