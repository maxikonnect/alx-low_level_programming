#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 *@s: the string that is  to be reversed.
 */

void rev_string(char *s)
{
	int length, y, x;
	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	y = length - 1;
	x = 0;

	while (y > x)
	{
		v1 = s[x];
		v2 = s[y];
		s[x] = v2;
		s[y] = v1;
		y--;
		x++;
	}
}
