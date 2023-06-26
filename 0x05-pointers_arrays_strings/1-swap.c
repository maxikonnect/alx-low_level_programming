#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: assign to pointer 1.
 * @b: assign to pointer 2
 *
 */

void swap_int(int *a, int *b)
{
	int swap;


	swap = *a;
	*a = *b;
	*b = swap;
}
