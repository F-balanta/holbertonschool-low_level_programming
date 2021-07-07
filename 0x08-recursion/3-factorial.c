#include "holberton.h"
/**
 * factorial - Write a function that returns the factorial of a given number.
 * @n:external input
 * Return:int
 */
int factorial(int n)
{
	int re_f = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	re_f = n * factorial(n - 1);
	return (re_f);
}
