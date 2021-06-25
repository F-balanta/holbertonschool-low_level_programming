#include "holberton.h"
/**
 * more_numbers - Is a main function
 * Return:(0)
 */
void more_numbers(void)
{
	short int v1, v2;

	for (v1 = 0; v1 <= 9; v1++)
	{
		for (v2 = 0; v2 <= 14; v2++)
		{
			if (v2 > 9)
			{
				_putchar (v2 / 10 + '0');
			}
			_putchar (v2 % 10 + '0');
		}
		_putchar ('\n');
	}
}
