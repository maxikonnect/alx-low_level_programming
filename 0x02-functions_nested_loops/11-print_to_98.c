#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
*/

void print_to_98(int n)
{
	int num;

	if (n > 98)
		for (num = n; num > 98; --num)
			printf("%d, ", num);
	else
		for (num = n; num < 98; ++num)
			printf("%d, ", num);
	printf("98\n");
}
