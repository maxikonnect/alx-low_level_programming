#include <stdio.h>
/**
 * reverse_array - a function that reverses the
 *                content of an array of integers
 *
 * @a: pointer to int array
 * @n: is the number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int temp, p, m;

	p = 0;
	m = n - 1;
	while (p < m)
	{
		temp = a[p];
		a[p] = a[m];
		a[m] = temp;
		p++;
		m--;
	}
}
