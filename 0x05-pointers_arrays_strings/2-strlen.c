#include "main.h"
/**
 * _strlen - function return the length of a char.
 * @s: pointer type char
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while ((*(s + i)) != '\0')
	{
		i++;
	}
	return (i);
}
