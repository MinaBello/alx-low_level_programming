#include "main.h"
/**
 * rev_string - print string in reverse.
 * @s: pointer type string
 * Return: 0 on success
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char x[1000];

	while (s[i] != '\0')
	{
		x[i] = s[i];
		i++;
	}
	j = i - 1;
	i = 0;
	while (j >= 0)
	{
		s[i] = x[j];
		i++;
		j--;
	}
}
