#include "function_pointers.h"
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation asked.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function same as operator given.
 */
int (*get_op_func(char *s))(int num1, int num2)
{
	int i = 0;
	char operators[] = "+-*/%";
	int (*operations[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
	while (operators[i])
	{
		if (*s == operators[i])
		{
			return (operations[i]);
		}
		i++;
	}
	return (NULL);
}
