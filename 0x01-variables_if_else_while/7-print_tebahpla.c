#include <stdio.h>
/**
 * main - print lowercase alphabet in reverse.
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'z';

	do {
		putchar(c);
		c--;
	} while (c >= 'a');
	putchar('\n');
	return (0);
}
