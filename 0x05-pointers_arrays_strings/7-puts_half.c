#include "main.h"
#include <string.h>
/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 *
 * Return: half a string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, start;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2 + 1;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}

