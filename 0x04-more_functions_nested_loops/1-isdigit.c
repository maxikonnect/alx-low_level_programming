#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: Integer holding the character
 *
 * Return: 1- Digit 0- Not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
