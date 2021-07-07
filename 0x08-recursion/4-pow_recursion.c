#include "holberton.h"
/**
 * _pow_recursion - Write a function that returns the value of x raised y
 * @x:external input
 * @y:external input
 * Return:int
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	return (x * (_pow_recursion(x, y  - 1)));

}
