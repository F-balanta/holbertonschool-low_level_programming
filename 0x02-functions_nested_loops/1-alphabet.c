#include "holberton.h"

/**
 * print_alphabet - prints Alphabet
 *
 * Return: int
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
}
