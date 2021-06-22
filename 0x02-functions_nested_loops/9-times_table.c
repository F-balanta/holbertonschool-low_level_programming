#include "holberton.h"
/**
* times_table - prints tables
* return 0
*/

void times_table(void)
{
	int h, v;
	int n1, n2;

	for (h = 0; h < 10; h++)
	{
		for (v = 0; v < 10; v++)
		{
			n1 = (h * v) / 10;
			n2 = (h * v) % 10;
			if (h >= 0)
			{
				if ((h * v) >= 10)
				{
					_putchar(n1 + '0');
				}
				_putchar(n2 + '0');
				_putchar(',');
				if ((h * v) < 10)
				{
					_putchar(' ');
				}
				_putchar(' ');
			}
		}
		_putchar(10);
	}
}
