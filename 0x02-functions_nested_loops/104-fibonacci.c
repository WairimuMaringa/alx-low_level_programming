#include <stdio.h>

/**
 * main - determine first ninety eight fibonacci numbers start with one and two
 *
 * Return: Always 0
 *
 */
int main(void)
{
	float a = 1;

	float b = a + 1;

	float c = a + b;

	int x = 0;

	printf("%.0f, ", a);
	printf("%.0f, ", b);

	while (x < 98)
	{
		x++;
		printf("%.0f", c);
		a = b;
		b = c;
		c = a + b;

		if (x < 98)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
