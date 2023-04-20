#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_char - prints a character
 * @arg: argument to print
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * print_int - prints an integer
 * @arg: argument to print
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints a float
 * @arg: argument to print
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * print_str - prints a string
 * @arg: argument to print
 */
void print_str(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: format string containing the types of the arguments
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int h = 0, v;
	char *separator = "";
	char *types = "cifs";
	void (*print_fn[])(va_list) = {print_char, print_int, print_float, print_str};

	va_start(arg, format);
	while (format && format[h])
	{
		v = 0;

		while (types[v])
		{
			if (types[v] == format[h])
			{
				printf("%s", separator);
				print_fn[v](arg);
				separator = ", ";
			}

			v++;
		}

		h++;
	}

	printf("\n");
	va_end(arg);
}
