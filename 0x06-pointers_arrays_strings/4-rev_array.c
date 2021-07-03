#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: external input
 * @n:external input
 * Return:(0)
 */
void reverse_array(int *a, int n)
{
	int i;
	int j = n - 1;
	int tmp;


	for (i = 0; i < n / 2; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}

}
