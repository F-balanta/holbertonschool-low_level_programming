#include <unistd.h>
#include <stdio.h>
/**
 * main - This function use write function for printf
 *
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
