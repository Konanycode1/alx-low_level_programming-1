#include "main.h"
#include <string.h>
/**
*puts_half - is a function
*@str: a parametre
*Return: Always 0
*/
void puts_half(char *str)
{

	int i, y, x;

	x = strlen(str);
	if (x % 2 == 1)
		y  = x / 2 + 1;
	else
		y = x / 2;

	for (i = y; i < x; i++)
		_putchar(str[i]);
	_putchar('\n');

}
