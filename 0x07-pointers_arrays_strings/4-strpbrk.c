#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
