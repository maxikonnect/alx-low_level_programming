#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 *
 * @p: string input
 *
 * Return: @p
*/
char *leet(char *p)
{
	int i;
	int j;
	int k;

	char l[] = "oOlLeEaAtT";
	char e[] = "0011334477";

	i = 0;
	while (p[i] != '\0')
	{
		j = 0;
		k = 0;
		while (l[j] != '\0')
		{
			if (p[i] == l[j])
			{
				k = j;
				p[i] = e[k];
			}
			j++;
		}
		i++;
	}
	return (p);
}
