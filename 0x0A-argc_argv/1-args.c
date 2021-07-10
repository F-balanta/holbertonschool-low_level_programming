#include "holberton.h"
#include <stdio.h>
/**
 * main - This function receive tow parameters
 * @argc: contains amount parameters
 * @argv: contains arrays strings
 * Return:int
 */
int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
