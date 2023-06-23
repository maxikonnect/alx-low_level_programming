#include"main.h"
#include <stdio.h>

/**
 * print_line -  function that draws a straight line in the terminal
 *
 * @n: is the number of times the _ will
 *    be printed
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; ++lnChr)
			_putchar('_');
		_putchar('\n');
	}
}
