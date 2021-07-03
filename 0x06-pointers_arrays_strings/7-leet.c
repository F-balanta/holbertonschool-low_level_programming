#include "holberton.h"
/**
 * *leet - Write a function that encodes a string into 1337.
 * @s:external input
 * Return:char
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "aAeEoOtTlL";
	char lan[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (l[j] == (s[i]))
				(s[i]) = lan[j];
		}
	}
	return (s);
}
