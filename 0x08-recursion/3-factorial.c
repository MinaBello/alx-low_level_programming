#include "main.h"

/**
 * factorial - function return the factorial of a number
 * @n: integar input
 * Return: Factorial of the given number
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
