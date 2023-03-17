#include <stdio.h>
/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s;
	char U;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}

	for (U = 'A'; U <= 'Z'; U++)
	{
		putchar(U);
	}

	putchar('\n');

	return (0);
}
