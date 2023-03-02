#include "main.h"

/**
 * puts_half - function to print half of the string
 *@str: function parameter
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i;
	int len = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		len++;
	if (len % 2 == 0)
	{
		for (i = len / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (len % 2 != 0)
	{
		for (i = (len - 1) / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}

}
