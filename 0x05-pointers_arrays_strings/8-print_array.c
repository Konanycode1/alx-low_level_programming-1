#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*print_array - a function
*@a:is a parametre on array
*@n: a parametre two
*Return: Always 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');

}
