#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: size of array argv
 * @argv: array of parameters
 *
 * Return: 0
 *
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
