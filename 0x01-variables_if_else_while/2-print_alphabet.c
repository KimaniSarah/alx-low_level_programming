#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	{
		putchar(t);
	}
	putchar('\n');

	return (0);
}
