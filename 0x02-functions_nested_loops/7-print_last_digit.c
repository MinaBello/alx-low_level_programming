#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int ln;

	if (n < 0)
	{
		ln = -1 * (n % 10);
		_putchar(ln + '0');
		return (ln);
	}
	else
	{
		ln = n % 10;
		_putchar(ln + '0');
		return (ln);
	}
}
