#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char msm[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int fd = 2;

	write(fd, msm, sizeof(msm) - 1);
	return (1);
}
