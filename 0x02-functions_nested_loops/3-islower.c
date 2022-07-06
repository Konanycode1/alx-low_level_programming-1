#include "main.h"
/**
 * _islower - funtion return 1 if c is lower or 0 is not.
 * @c: is the int  that will use for the argument
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
