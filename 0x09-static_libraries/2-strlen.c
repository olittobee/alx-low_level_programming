#include "main.h"

/**
 * _strlen - function of a string and length
 *
 * @s: char to check
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{

	int a = 0; /* counting from 0*/

	for (; *s++;)
		a++;
	return (a);
}
