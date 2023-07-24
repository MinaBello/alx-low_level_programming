#include "main.h"
/**
 * _puts - print string.
 * @str: pointer type char
 * Return:0 on success
 */
void _puts(char *str)
{
	int i = 0;

	while ((*(str + i)) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
