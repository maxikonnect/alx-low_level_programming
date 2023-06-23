#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square, followed by a new line.
 * @n : The number of lines using '#' characters to use per row and column
 * Return: Void.
 */
void print_square(int n)
{
	int a;
	int b;

	for (b = 0; b < n; b++)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
