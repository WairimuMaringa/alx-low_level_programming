#include "main.h"
/**
 * _strlen_recursion - prints string length
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparing - check characters recursively for palindrome
 * @s: string
 * @x: starting position
 * @y: ending position
 * Return: 1 is palindrome, 0 otherwise
 */
int comparing(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + comparing(s, x + 1, y - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if string is palindrom and returns 1
 * @s: string
 * Return: 1 if s is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparing(s, 0, _strlen_recursion(s) - 1));
}
