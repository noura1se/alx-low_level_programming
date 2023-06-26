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
	int y = 0; 

	while (*x != '\0')
	{
		cpt++;
		x++;
	}
	y = cpt - 1;
	for (i = 0; i <= y; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
