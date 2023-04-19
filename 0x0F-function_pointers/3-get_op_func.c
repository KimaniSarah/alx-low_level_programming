#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation asked.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function same as operator given.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int h = 0;

	while (ops[h].op != NULL && *(ops[h].op) != *s)
		h++;

	return (ops[h].f);
}

