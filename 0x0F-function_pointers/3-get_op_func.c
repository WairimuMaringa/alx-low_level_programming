#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - function that selects correct function to
 * perform the operation asked by user
 * @s: operator passed as argument to the program
 * Return: a function that returns a pointer to the function
 * that corresponds to the operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int x;

	x = 0;
	while (ops[x].f != NULL)
	{
		if (*s == *(ops[x].op) && s[1] == '\0')
			return (ops[x].f);
		x++;
	}
	printf("Error\n");
	exit(99);
}
