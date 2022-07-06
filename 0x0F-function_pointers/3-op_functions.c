#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition of two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction of two numbers
 * @a: first number
 * @b: second number
 * Return: subtraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of two numbers
 * @a: first number
 * @b: second number
 * Return: mutiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}
/**
 * op_mod - modulo division
 * @a: first number
 * @b: second number
 * Return: modulo division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
