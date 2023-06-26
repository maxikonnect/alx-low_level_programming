#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: the string to calculate it's length.
 * Return: prints out  length of a string.
 */

int _strlen(char *s)
{
	int n;
	int length = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		length++;
	}
	return (length);
}
