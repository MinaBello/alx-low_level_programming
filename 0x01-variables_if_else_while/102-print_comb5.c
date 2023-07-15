#include <stdio.h>
/**
 * main - print a compination from 4 digits
 * from 00 01 to 99 99
 *
 * Return: 0 on success
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = '0' ; a <= '9' ; a++)
	{
		for (b = '0' ; b <= '9' ; b++)
		{
			for (c = '0' ; c <= '9' ; c++)
			{
				for (d = '0' ; d <= '9' ; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a <= '9' && b <= '9' && c <= '9' && d < '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
