#include "main.h"
/**
 * HelpFunction - evaluate function sqrt
 * @num: integer
 * @i: possible factor of number
 * Return: 0 if not prime, 1 if prime
 */
int HelpFunction(int num, int i)
{
	/*Evaluate function*/
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (SqrtFunction(num, i + 1));
		}
	}
}
/**
 * is_prime_number - return the natural square root of a number.
 * @n: number to find sqrt of.
 * Return: 1 if number is prime..
 * 0 if number is not prime..
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (HelpFunction(n, 2));
	}
}
