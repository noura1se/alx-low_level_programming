#include "main.h"

/**
  *puts2 - printing one caracter and skiping the other
  *@str: the string
  */


void puts2(char *str)
{
	int cpt;
	int i;
	char *x = str;

	while (*x != '\0')
	{
		cpt++;
		x++;
	}
	for (i = 0; i < cpt; i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
