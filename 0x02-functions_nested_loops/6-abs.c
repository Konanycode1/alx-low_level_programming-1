#include "main.h"
/**
 *_abs - function that computes the absolute value.
 *@c: is the int varible.
 *Return: 0.
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);

}
