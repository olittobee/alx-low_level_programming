#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int x;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (x = 'a' ; x <= 'f' ; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
