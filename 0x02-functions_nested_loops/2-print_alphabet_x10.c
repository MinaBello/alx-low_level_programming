#include "main.h"
/**
 * print_alphabet_x10 - print lowercase alphabet 10 times .
 *
 * Return: 0 on success .
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		do {
			_putchar(a);
			a++;
		} while (a <= 'z');

		_putchar('\n');
		a = 'a';
	}
}
