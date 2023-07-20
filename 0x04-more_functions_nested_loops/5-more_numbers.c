#include "main.h"
/**
 * more_numbers - print form 0 to 14 .
 *
 * Return: 0 on success.
 */
void more_numbers(void)
{
	int a;
	int b = 0;

	for (a = 0; a < 10; a++)
	{
		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar(b / 10 + '0');
			}
			_putchar(b % 10 + '0');
			b++;
		}
		b = 0;
		_putchar('\n');
	}
}
