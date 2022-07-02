#include <stdio.h>
/**
 *main - Print the number of base 16 in lowercase
 *
 *Return: Always 0.
 */
int main(void)
{
int nbr;
char letters;
for (nbr = 0; nbr < 10; nbr++)
	putchar((nbr % 10) + '0');
for (letters = 'a'; letters <= 'f'; letters++)
	putchar(letters);
putchar('\n');
return (0);

}
