#include "main.h"
/**
 * prime_num - identify priume numbers
 * @n:the number to be identified
 * @h:the divisor of n
 *
 * Return: if prime return 1 otherwise return 0
 */
int prime_num(int n, int h)
{
	if (n >= 2 && h >= n)
		/**
		 * all the other integers before 2 were not divisible to n
		 * that makes n a prime num
		 */
	{
		return (1);
	}
	else if (n < 2)
		/**
		 * 0,1 and -ve nums cant be prime
		 */
	{
		return (0);
	}
	else if (n % h == 0)
		/**
		 * there is no remainder thus n is divisible by h which is not 1 or itself
		 * thus its not prime
		 */
	{
		return (0);
	}
	else
	{
		return (prime_num(n, h + 1));
	}
	/**
	 * this will reduse the int h so that n can be divided by all nums < itself
	 * to det if its prime
	 */
}
/**
 * is_prime_number - locate/identify prime numbers
 * @n:the number to be identified
 *
 * Return:1 if prime otherwise 0
 */
int is_prime_number(int n)
{
		return (prime_num(n, 2));
}
