#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string, in reverse
 * @s:
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int j;

	for (j = length - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
