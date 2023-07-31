#include "main.h"
/**
 * *_strncpy - copy a string or a part ot it.
 * @dest: pointer type char 'output'
 * @src: pointer type char 'string to be copied.
 * @n:number of copied char.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < n; i++)
	{
		if (i < j)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = 0;
		}
	}

	return (dest);
}
