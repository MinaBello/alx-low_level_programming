#include "main.h"
/**
 * print_square - print square of the number by #.
 * @size: integar input.
 * Return: 0 on success
 */
void print_square(int size)
{
	int a;
	int b = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	if (size > 0)
	{
		for (a = 0 ; a < size ; a++)
		{
			while (b < size)
			{
				_putchar('#');
				b++;
			}
			_putchar('\n');
			b = 0;
		}
	}

}

