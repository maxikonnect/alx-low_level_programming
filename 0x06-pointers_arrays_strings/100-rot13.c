#include "main.h"

/**
 * rot13 -  a   function that encodes a string using rot13.
 * @p: An input string to encode using rot13
 * Return: An encode string
 */
char *rot13(char *p)
{
	int n = 0;

	while (p[n] != '\0')
	{
		while ((p[n] >= 'a' && p[n] <= 'z') ||
				(p[n] >= 'A' && p[n] <= 'Z'))
		{
			if ((p[n] >= 'a' && p[n] <= 'm') ||
					(p[n] >= 'A' && p[n] <= 'M'))
				p[n] += 13;
			else
				p[n] -= 13;
			n++;
		}
		n++;
	}
	return (p);
}
