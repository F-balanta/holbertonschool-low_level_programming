#include "holberton.h"
/**
 * *string_toupper - To uper function
 * @s: external input
 * Return:char
 */
char *string_toupper(char *s)
{
	int i = 0, l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	while (i < l)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);


}
