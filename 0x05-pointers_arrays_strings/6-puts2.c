#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first
 * @str:String to be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
