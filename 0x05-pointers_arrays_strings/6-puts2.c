#include "main.h"

/**
  *puts2 - printing one caracter and skiping the other
  *@str: the string
  */


void puts2(char *str)
{
	_putchar(*str);
	while (*str != '\0')
	{
		_putchar(*(str + 2));
	}
	_putchar('\n');
}
