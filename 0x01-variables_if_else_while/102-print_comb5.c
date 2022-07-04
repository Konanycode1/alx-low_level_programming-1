#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: Prints all possible combinations of two two-digit numbers
 *
 *Return: Always 0.
 */
int main(void)
{
int nbr1, nbr2;
for (nbr1 = 0; nbr1 <= 98; nbr1++)
{
	for (nbr2 = nbr1 + 1; nbr2 <= 99; nbr2++)
	{
		putchar((nbr1 / 10) + '0');
		putchar((nbr1 % 10) + '0');
		putchar(' ');
		putchar((nbr2 / 10) + '0');
		putchar((nbr2 % 10) + '0');
		if (nbr1 == 98 && nbr2 == 99)
			continue;
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);

}
