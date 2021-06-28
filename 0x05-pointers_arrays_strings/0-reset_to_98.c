#include "holberton.h"
/**
 * reset_to_98 - Is amain function
 * @n: This parameter is redquired for this function
 * Return: int
 */
void reset_to_98(int *n)
{
	int i = *n;

	i = 98;
	*n = i;
}
