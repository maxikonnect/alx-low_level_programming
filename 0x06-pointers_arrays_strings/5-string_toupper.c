#include "main.h"
/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 *
 * @n : pointer to input char
 *
 * Return: @n
*/


char *string_toupper(char *n)
{
	int p;

	p = 0;
	while (n[p] != '\0')
	{
		if (n[p] >= 'a' && n[p] <= 'z')
			n[p] = n[p] - 32;
		p++;
	}
	return (n);
}
