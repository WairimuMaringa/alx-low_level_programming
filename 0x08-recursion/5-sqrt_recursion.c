#include "main.h"

/**
 * calculateSquare - gives squareroot of a number
 * @n: input number
 * @i: iterator
 * Return: squareroot of n, -1 if otherwise
 */
int calculateSquare(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + calculateSquare(n, i + 1));
}
/**
 * _sqrt_recursion - return natural squareroot of a number
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (calculateSquare(n, 2));
}
