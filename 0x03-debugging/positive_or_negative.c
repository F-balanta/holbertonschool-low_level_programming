#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/**
 * positive_or_negative - prints asdasdasd asdasdasd asdasd
 * Return: int
 * @i: input entire
 */
void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
