#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n:number of arguments
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int h;
	unsigned int sum = 0;
	va_list arg;

	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}

	for (h = 0; h < n; h++)
	{
		sum = va_arg(arg, int) + sum;
	}
	va_end(arg);
	return (sum);
}
