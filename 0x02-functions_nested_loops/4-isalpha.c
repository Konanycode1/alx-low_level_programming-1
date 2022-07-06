#include "main.h"

/**
 *_isalpha - function return  that checks for alphabetic.
 * @c: is the int varaible.
 *
 *Return: 0
 */

int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
