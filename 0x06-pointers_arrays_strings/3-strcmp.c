#include "main.h"
/**
 * _strcmp - compare 2 strings if equal or no
 * @s1: first string input.
 * @s2: second string input.
 * Return: -15 if s1<s2 , 15 is s1>s2, 0 is s1==s1.
 */

int _strcmp(char *s1, char *s2)
{

	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
	return (*s1 - *s2);
	}
}
