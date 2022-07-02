#include <stdio.h>
/**
 *main - prints the alphabetin lowercase and then in uppercase.
 *
 *Return: Always 0.
 */

int main(void)
{
char letters;
for (letters = 'a'; letters <= 'z'; letters++)
	putchar(letters);
for (letters = 'A'; letters <= 'Z'; letters++)
	putchar(letters);
putchar('\n');
return (0);
}
