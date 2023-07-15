#include <stdio.h>
/**
 * main - print basic hexadecimal numbers.
 *
 * Return: 0 on success
 */
int main(void)
{
	char a = '0';

	do {
		putchar(a);
		a++;
	} while (a <= '9');
	for (a = 'a' ; a <= 'f' ; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
