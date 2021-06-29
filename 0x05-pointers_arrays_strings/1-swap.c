#include <stdio.h>
#include "holberton.h"
/**
 * swap_int - This function swap the values of two integers
 * @a: external input
 * @b: external input
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
