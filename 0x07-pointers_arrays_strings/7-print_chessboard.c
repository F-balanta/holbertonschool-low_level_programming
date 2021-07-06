#include "holberton.h"
/**
 * print_chessboard - Write a function that prints the chessboard.
 * @a:external input
 * Return:(0)
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
	_putchar(10);
	}
}
