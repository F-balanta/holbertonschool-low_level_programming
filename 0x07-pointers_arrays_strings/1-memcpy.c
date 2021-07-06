#include <stdio.h>
/**
 * *_memcpy - Write a function that copies memory area.
 * @dest:external input
 * @src:external input
 * @n:external input
 * Return:char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
