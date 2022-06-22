#include "main.h"

/**
 * wildcmp - comparison of two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 is strings are identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
		return (1);
	if (*s1 == 0 && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*' && (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2)) && *s1 != 0)
		return (1);
	return (0);
}
