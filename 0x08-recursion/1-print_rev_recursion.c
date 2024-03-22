#include "main.h"

/**
 * _print_rev_recursion - function print string from end to start
 * @s: pointer to printed char.
 * Return: printed String
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}			
