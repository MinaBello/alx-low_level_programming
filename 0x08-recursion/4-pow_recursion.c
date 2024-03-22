#include "main.h"

/**
 * _pow_recursion - function the make number power another number
 * @x: input integar as Base number
 * @y: input integar as power number
 * Return: power of this numbers
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (x == 0 || y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
