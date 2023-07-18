#include "main.h"
/**
 * jack_bauer - print all clock minutes.
 *
 * Return: 0 on success
 */
void jack_bauer(void)
{
	int m1 = '0';
	int m2 = '0';
	int h1 = '0';
	int h2 = '0';
	int x = 0;

	while (x < 1440)
	{
		_putchar(h2);
		_putchar(h1);
		_putchar(':');
		_putchar(m2);
		_putchar(m1);
		_putchar('\n');

		m1++;
		if (m1 > '9')
		{
			m1 = '0';
			m2++;
		}
		if (m2 > '5')
		{
			m2 = '0';
			h1++;
		}
		if (h1 > '9')
		{
			h1 = '0';
			h2++;
		}
		x++;
	}
}
