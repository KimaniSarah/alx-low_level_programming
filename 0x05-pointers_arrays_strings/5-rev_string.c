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
	int a, b;

	for (a = 0, b = len - 1; a < b; a++, b--)
	{
		int temp = s[a];

		s[a] = s[b];
		s[b] = temp;
	}
	printf("%s\n", s);
}
