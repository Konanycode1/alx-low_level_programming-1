#include "main.h"
#include <string.h>
/**
*print_rev - a function that prints a string, in reverse.
*@s: is a function variable
*Return: Always 0
*/
void print_rev(char *s)
{
	int n, i

	n = strlen(s);

	for (i = n - 1; i <= 0; i--)
	{
		_putchar(s[i]);
	}
}
