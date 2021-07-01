#include "holberton.h"
/**
 * _strlen - function that returns the length of a string.
 * @s:external input
 * Return:int
 */
int _strlen(char *s)
{
	int j  = 0;

	while (s[j] != '\0')
		j++;
	return (j);
}
