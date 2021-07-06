#include <stdio.h>
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s:external input
 * @accept:external input
 * Return:int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int numb = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				numb++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (numb);
		}
		s++;
	}

	return (numb);
}
