#include<stdio.h>
#include "holberton.h"
/**
 * main - This function have two parameters ARGC - ARGV
 * @argc: Contains amount of parameters
 * @argv: Is an array of arrays
 * Return:int
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
