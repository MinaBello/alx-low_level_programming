#include "main.h"
/**
 * print_alphabet - print lowercase alphabet using _putchar only .
 *
 * Return: 0 on success
 */
void print_alphabet(void)
{
	char a = 'a';

	do {
		_putchar(a);
		a++;
	} while (a <= 'z');
	_putchar('\n');
}
