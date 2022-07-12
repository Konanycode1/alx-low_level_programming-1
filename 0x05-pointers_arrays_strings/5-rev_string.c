#include "main.h"
/**
*rev_string - Write a function that reverses a string
*@s: variable of function
*Return: Always 0
*/
void rev_string(char *s)
{

	int i, length1, length2;
	int tmp;

	length1 = 0;
	length2 = 0;
	while (s[length1] != '\0')
		length1++;
	length2 = length1 - 1;
	for (i = 0; i < length1 / 2)
	{
		tmp = s[i];
		s[i] = s[length2];
		s[length2] = tmp;
		length2 -= 1;
	}
}
