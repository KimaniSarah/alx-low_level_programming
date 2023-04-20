#include<stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator:is the string to be printed between the strings
 * @n:number of strings passed to the function
 * Return:0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int h;
	char *str;
	va_list arg;

	va_start(arg, n);
	for (h = 0; h < n; h++)
	{
		str = va_arg(arg, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && h < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
