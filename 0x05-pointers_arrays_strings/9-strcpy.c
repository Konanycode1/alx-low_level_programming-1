#include "main.h"
#include <stdio.h>
/**
*_strcpy - is a function declarate
*@dest: its argument
*@src: is a argument of function
*Return: Always 0
*/
char *_strcpy(char *dest, char *src)
{
	char *star = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (star);

}
