#include <stdio.h>

/**
 * main - gibe first fifty fibonacci numbers starting with one and two
 *
 * Return: Always 0
 *
 */
int main(void)
{
	long int a, b, c;
	int x;

	a = 1;

	b = a + 1;

	c = a + b;

	x = 2;

	printf("%ld, %ld, ", a, b);

		while (x < 50)
		{
			printf("%ld", c);
			x++;
			a = b;
			b = c;
			c = a + b;

			if (x < 50)
			{
				printf(", ");
			}
		}
		printf("\n");

		return (0);
}
