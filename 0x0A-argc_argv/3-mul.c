#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function print a multiply
 * @argc:contains the amount parameters
 * @argv:Arrays strings
 * Return:int
 */
int main(int argc, char *argv[])
{
	int result, valor1, valor2;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		valor1 = atoi(argv[1]);
		valor2 = atoi(argv[2]);
		result = valor1 * valor2;
		printf("%d\n", result);
		return (0);
	}
}
