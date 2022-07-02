#include <stdio.h>
/**
 *main - Prints the alphabet in lowercase.
 *
 *Return: Always 0.
 */
int main(void)
{
char letters;
for (letters = 'a'; letters <= 'Z'; letters++)
	putchar(letters);
putchar('\n');
return (0);
}
