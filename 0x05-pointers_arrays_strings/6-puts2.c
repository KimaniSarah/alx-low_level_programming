#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 * @str: pointer input
 *
 * Return: string
 */
void puts2(char *str)
{
	int j;
	int length = strlen(str);

	for (j = 0; j < length; j += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
