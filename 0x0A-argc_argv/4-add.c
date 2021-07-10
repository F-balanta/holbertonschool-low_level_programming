#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	int number, sum = 0,is_d;

	for (number = 1; number < argc; number++)
	{
		for (is_d = 0; argv[number][is_d]; is_d++)
		{
			if (argv[number][is_d] < '0' || argv[number][is_d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[number]);
	}

	printf("%d\n", sum);

	return (0);
}
