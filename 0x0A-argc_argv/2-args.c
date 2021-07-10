#include "holberton.h"
#include <stdio.h>
/**
 * main - This function prints the parameters received by console
 * @argc:contains the amount of parameters
 * @argv:is an array of strings
 * Return:int
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
