#include <stdio.h>

/**
 * main - determine first ninety eight fibonacci numbers start with one and two
 *
 * Return: Always 0
 *
 */
int main(void)
{
	int a, b, x, z;
	int k;

	z = 98;

	for (x = 1; x <= z; x++)
	{
		if (x == 98)
		{
			printf("%d, ", b);
		}
		else
		{
			printf("%d, ", b);
			k = a + b;
			a = b;
			b = k;
		}
	}
	printf("\n");

	return (0);
}
