#include "main.h"

/**
 * _pow_recursion - function that returns the value of x to the power of y
 * @x: integer parameter
 * @y: integer parameter
 * Return: recursion
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

