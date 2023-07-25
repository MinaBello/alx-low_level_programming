#include "main.h"
/**
 * puts_half - print every other character.
 * @str: input pointer type char
 * Return: 0 on succcess
 */
void puts_half(char *str)
{
	int x = 0;
	int y;

	while ((*(str + x)) != '\0')
	{
		x++;
	}
	if (x % 2 == 0)
	{
		for (y = x / 2; y <= (x - 1); y++)
		{
			_putchar(*(str + y));
		}
		_putchar('\n');
	}
	else
	{
		for (y = ((x - 1) / 2) + 1; y <= x - 1; y++)
		{
			_putchar(*(str + y));
		}
		_putchar('\n');
	}
}
