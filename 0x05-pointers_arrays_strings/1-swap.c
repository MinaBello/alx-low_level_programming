#include "main.h"
/**
 * swap_int - swap to pointers value.
 * @a: pointer type integar
 * @b: pointer type integar
 * Return: 0 on success
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
