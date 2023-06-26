#include "main.h"

/**
  *_strlen - retuning the lenght of a string
  *@s: the char
  *Return: the lenght
  */

int _strlen(char *s)
{
	int cpt = 0;

	while (*s != '\0')
	{
		cpt++;
		s++;
	}
	return (cpt);
}
