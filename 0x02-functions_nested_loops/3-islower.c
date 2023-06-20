#include "main.h"

/**
 * _islower - Checks if a character is lowercase or not
 * @b: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int b)
{
	if (b >= 'a' && b <= 'z')
		return (1);
	else
		return (0);
}
