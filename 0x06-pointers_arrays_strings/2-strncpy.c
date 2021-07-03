#include "holberton.h"
/**
 * *_strncpy - Write a function that compares two strings.
 * @dest : external input
 * @src: external input
 * @n: external input
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *tmp = dest;

	while (src[i] != '\0' && n)
	{
		dest[i] = src[i];
		dest++;
		src++;
		n--;
	}

	while (n--)
	{
		dest[i] = '\0';
		dest++;
	}

	return (tmp);
}
