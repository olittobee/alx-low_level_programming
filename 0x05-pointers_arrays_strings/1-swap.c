#include "main.h"

/**
 * swap_int - swap the value of two int
 *
 * @a: first working number
 * @b: second working number
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
