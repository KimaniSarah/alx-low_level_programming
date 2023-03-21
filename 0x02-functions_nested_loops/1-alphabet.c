#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char i; 

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
