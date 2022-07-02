#include <stdio.h>

/**
 *main - Print all single digit number of base 10.
 *
 *Return: Always 0.
 */
int main(void)
{
int nbr;
for (nbr = 0; nbr < 10; nbr++)
	putchar("%d", nbr);
putchar("\n");

return (0);
}
