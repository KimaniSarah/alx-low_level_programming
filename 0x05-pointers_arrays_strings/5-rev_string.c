#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverses a string.
 * @s: string reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int a;

	for (a = len - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
