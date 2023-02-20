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

	for (i = 0; i < 10 ; i++)
	{
		for (x = 1 ; x < 10 ; x++)
		{
			if (i < x && i != x)
			{
				putchar(i + '0');
				putchar(x + '0');
				if (i+x != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
