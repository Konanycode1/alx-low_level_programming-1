#include <stdio.h>
/**
 *main - Print all possible combinations of single-digit numbers
 *
 *
 *Return: Always 0.
 */
int main(void)
{

int nbr;
for (nbr = 0; nbr <= 9; num++)
{
	putchar((nbr % 10) + '0');
	if (nbr == 9)
		continue;
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);

}
