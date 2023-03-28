#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverses a string in place.
 * @s: string reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i, j;
	char tmp;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
