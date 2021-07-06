#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a:external input
 * @size:external input
 * Return:(0)
 */

void print_diagsums(int *a, int size)
{
	int x, y, rsm1 = 0, rsm2 = 0;

	for (x = 0; x < size * size; x += size + 1)
	{
		rsm1 += a[x];
	}
	for (y = size - 1; y < (size * size) - 1; y += size - 1)
	{
		rsm2 += a[y];
	}
	printf("%d, %d\n", rsm1, rsm2);
}
