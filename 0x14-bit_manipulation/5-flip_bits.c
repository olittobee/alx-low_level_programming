#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int kemp;
	unsigned long int olae = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		kemp = olae >> a;

		if (kemp & 1)
			count++;
	}
	return (count);
}
