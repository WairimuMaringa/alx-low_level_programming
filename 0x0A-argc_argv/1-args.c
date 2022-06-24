#include <stdio.h>

/**
 * main - print no of arguments passed
 * @argc: size of array argv
 * @argv: array of parameters
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
