#include "holberton.h"
/**
 * *_strcpy -  copy the string pointed
 * @dest:external input
 * @src:external input
 * Return:char
 */
char *_strcpy(char *dest, char *src)

{

	char *tmp = dest;

	dest = tmp;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (tmp);
}
