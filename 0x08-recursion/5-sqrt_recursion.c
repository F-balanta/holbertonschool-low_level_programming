#include "holberton.h"
/**
 * sqrt_implement - Function that finds the root of a number
 * @n:external input
 * @raiz:external input
 * Return:int
 */
int sqrt_implement(int n, int raiz)
{
	int result = raiz * raiz;

	if (raiz * raiz == n)
	{
		return (raiz);
	}
	if (result > n)
	{
		return (-1);
	}
	return (sqrt_implement(n, raiz + 1));
}
/**
 * _sqrt_recursion -  that returns the natural square root of a number.
 * @n:external input
 * Return:int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (sqrt_implement(n, 0));
}
