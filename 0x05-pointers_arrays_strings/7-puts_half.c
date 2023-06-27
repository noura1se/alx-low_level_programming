#include "main.h"

/**
  *puts_half - printing a half of a string
  *@str: the input
  */

void puts_half(char *str)
{
	int a, n, cpt = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		cpt++;
	}
	n = (cpt / 2);
	if ((cpt % 2) == 1)
	{
		n = ((cpt + 1) / 2);
	}
	for (a = n; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
