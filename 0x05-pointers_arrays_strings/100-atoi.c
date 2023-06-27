#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, n = 0;
	unsigned int res = 0;

	while (!(s[n] <= '9' && s[n] >= '0') && s[n] != '\0')
	{
		if (s[n] == '-')
			sign *= -1;
		n++;
	}
	while (s[n] <= '9' && (s[n] >= '0' && s[n] != '\0'))
	{
		res = (res * 10) + (s[n] - '0');
		n++;
	}
	res *= sign;
	return (res);
}
