#include "holberton.h"
/**
* *_strstr - Write a function that locates a substring.
* @haystack:external input
* @needle:external input
* Return:char
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
			{
				return ((haystack + i) - (j - 1));
			}
		}
		else
			j = 0;
		i++;
	}
	if (*needle == '\0')
		return (haystack);
	return (0);
}
