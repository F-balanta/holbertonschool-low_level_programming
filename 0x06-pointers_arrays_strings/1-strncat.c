#include <stdio.h>
/**
 * *_strncat - function that concatenates two strings.
 * @dest: Pointer receives data from src
 * @src: pontter that send data from dest
 * @n: n cant of data
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n--)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
