#include "main.h"
/**
 * print_line - print n number lines .
 * @n: integar input
 * Return: 0 on success
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
