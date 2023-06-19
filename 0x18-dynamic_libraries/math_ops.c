/**
 * mod - Multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of the two numbers.
 */
int mod(int a, int b)
{
		return (a % b);
}
/**
 * mul - Multiplies two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The product of the two numbers.
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two numbers.
 * @a: The dividend.
 * @b: The divisor.
 *
 * Return: The quotient of the division.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		return (0);
	}
	return (a / b);
}

/**
 * add- Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference between the two integers.
 */
int sub(int a, int b)
{
	return (a - b);
}
