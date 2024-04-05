#include "main.h"

int natural_square(int x, int y);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integar input number
 * Return: natural square root or -1 if no square root of n
**/

int _sqrt_recursion(int n)
{
	return (natural_square(n, 1));
}


/**
 * natural_square - A FUNC. THAT HELP TP FIND THE SQUARE ROOT
 * @x: integar input
 * @y: integar input
 * Return: square root or -1
**/
int natural_square(int x, int y)
{
	int s = y * y;

	if (s > x)
	{
		return (-1);
	}
	if (s == x)
	{
		return (y);
	}
	return (natural_square(x, y + 1));
}
