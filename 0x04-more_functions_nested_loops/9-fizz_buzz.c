#include <stdio.h>
/**
 * main - print fizzbuzz
 *
 * Return: Always
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");

	}
	printf("\n");
	return (0);
}
