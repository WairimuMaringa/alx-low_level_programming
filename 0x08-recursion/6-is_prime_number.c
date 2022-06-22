#include "main.h"

/**
 * find_prime - gives prime numbers recursively
 * @x: number
 * @y: iterator
 * Return: prime numbers
 */
int find_prime(int x, int y)
{
	if ((x % y) == 0 && y < x)
		return (0);
	if (x == y)
		return (1);
	else
		return (find_prime(x, y + 1));
}
/**
 * is_prime_number - returns 1 if prime number or 0 if not
 * @n: number to be evaluated
 * Return: 1 if prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, 2));
}
