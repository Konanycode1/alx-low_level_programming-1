#include "main.h"
#include <string.h>
/**
 *_puts - Write a function that prints a string, followed by a new line
 *@str: is a variable for function
 *Return: Always 0
 */
void _puts(char *str)
{

	for (; *str != '\n'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
