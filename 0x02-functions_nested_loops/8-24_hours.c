#include "holberton.h"

/**
 * jack_bauer - main check the code for Holberton School students.
 * Return: (0)
 */

void jack_bauer(void)
{
	int ho, mi;

	for (ho = 0; ho <= 23; ho = ho + 1)
	{
		for (mi = 0; mi <= 59; mi = mi + 1)
		{
			_putchar((ho / 10) + '0');
			_putchar((ho % 10) + '0');
			_putchar(':');
			_putchar((mi / 10) + '0');
			_putchar((mi % 10) + '0');
			_putchar('\n');
		}
	}

}
