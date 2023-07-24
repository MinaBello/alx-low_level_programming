#include "main.h"
/**
 * print_rev - print string in reverse.
 * @s: pointer type string
 * Return: 0 on success
 */
void print_rev(char *s)
{
	int i = 0;

	while ((*(s + i)) != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		i--;
		_putchar(*(s + i));
	}
	_putchar('\n');
}
