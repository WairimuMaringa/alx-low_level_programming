#include <stdio.h>

/**
 * main - fibonacci seq starting with one and two without exceeding four milli
 *
 * Return: Always 0
 *
 */
int main(void)
{
	long int a, b, c;
	int x;

	a = 1;

	b = a;

	c = a + b;

	x = 0;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			x += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", x);

	return (0);
}
