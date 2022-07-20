#include "main.h"
/**
 * SqrtFunction - evaluate function sqrt
 * @num: integer
 * @psqrt: possible sqrt of number
 * Return: evaluate sqrt
 */
int SqrtFunction(int num, int psqrt)
{
	/*Evaluate function*/
	if (psqrt * psqrt)
	{
		return (psqrt);
	}
	else
	{
		if ((psqrt * psqrt) > num)
			return (-1);
		else
			return (SqrtFunction(num, psqrt + 1));
	}
}
/**
 * _sqrt_recursion - return the natural square root of a number.
 * @n: number to find sqrt of.
 * Return: squareroot of n.
 * -1 if n does not have natural sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (SqrtFunction(n, 0));
}
