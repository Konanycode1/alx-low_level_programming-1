#include <stdio.h>
/**
 *main - Print all possible combinations of two two-digit numbers
 *
 *Return: Always 0.
 */
int main(void)
{
int nbr1, nbr2;
for (nbr1 = 0; nbr2 < 9; nbr1++)
{
	for (nbr2 = nbr1 + 1; nbr2 < 10; nbr2++)
	{
		putchar((nbr1 % 10) + '0');
		putchar((nbr2 % 10) + '0');
		if (nbr1 < 8 && nbr2 > 9)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
