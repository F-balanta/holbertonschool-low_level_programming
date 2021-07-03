#include "holberton.h"
/**
 * *cap_string - Write a function that capitalizes all words of a string.
 * @s:Pointer parameter
 * Return:char
 */
char *cap_string(char *s)
{
	int i = 0, j;
	int sspdr = 13;
char p[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[i])
	{
		j = 0;

		while (j < sspdr)
		{
			if ((i == 0 || s[i - 1] == p[j]) && (s[i] >= 97 && s[i] <= 122))
				s[i] -= 32;

			j++;
		}

		i++;
	}

	return (s);
}

