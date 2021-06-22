#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print numbers from N to 98
 * Return: int
 * @a: external input
 */

void print_to_98(int a)
{
	while (a != 98)
	{
		printf("%d", a);
		printf(",");
		printf(" ");
		if (a < 98)
			a++;
		else
			a--;
	}
	printf("98\n");
}
