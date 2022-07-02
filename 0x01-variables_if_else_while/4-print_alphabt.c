#include <stdio.h>
/**
 *main - Print the alphabet in lowercase accept q and e
 *
 *Return: Always 0.
 */
int main(void)
{
char letters;

for (letters = 'a'; letters <= 'z'; letters++)
{
	if (letters != 'e' && letters != 'q')
		putchar(letters);
}
putchar('\n');
return (0);
}
