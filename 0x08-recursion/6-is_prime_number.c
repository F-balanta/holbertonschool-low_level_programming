#include "holberton.h"

/**
 * find_primeN - This function find the prime number
 * @i:external input
 * @n:external input
 * Return:int
 */
int find_primeN(int i, int n)
{
if (n % i == 0 || n < 2)
	return (0);

if (n % i != 0 && n % 5 != 0)
	return (1);
return (find_primeN(i + 1, n));
}
/**
 * is_prime_number - return 1 if the integer is a prime number
 * @n:external input
 * Return: return 1, otherwise 0
 */
int is_prime_number(int n)
{
return (find_primeN(2, n));
}
