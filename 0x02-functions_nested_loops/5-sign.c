#include "main.h"
/**
 * print_sign - check number if is greater than or equel
 * or less than zero.
 * @n: char type number
 * Return: 0 on success
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
