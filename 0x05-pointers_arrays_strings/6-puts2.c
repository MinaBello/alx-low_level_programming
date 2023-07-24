#include "main.h"
/**
 * puts2 - print every other character.
 * @str: input pointer type char
 * Return: 0 on succcess
 */
void puts2(char *str)
{
	int x = 0;
	int y;

	while ((*(str + x)) != '\0')
	{
		x++;
	}
	for (y = 0; y <= x - 1 ; y += 2)
	{
		_putchar(*(str + y));
	}
	_putchar('\n');
}
