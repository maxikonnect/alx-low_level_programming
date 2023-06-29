#include <stdio.h>
/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @p: pointer to char input array
 *
 * Return: @p
*/

char *cap_string(char *p)
{
	int i = 0;


	while (p[i] != '\0')
	{

		if (p[i] >= 97 && p[i] <= 122)
		{

			if (i == 0)
			{
				p[i] -= 32;
			}

			if (p[i - 1] == 32 || p[i - 1] == 9 ||  p[i - 1] == 10 ||
				p[i - 1] == 44 || p[i - 1] == 59 || p[i - 1] == 46 ||
				p[i - 1] == 33 || p[i - 1] == 63 || p[i - 1] == 34 ||
				p[i - 1] == 40 || p[i - 1] == 41 || p[i - 1] == 123 ||
				p[i - 1] == 124)
			{
				p[i] -= 32;
			}
		}
		i++;
	}
	return (p);
}

