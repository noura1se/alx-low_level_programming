#include "main.h"

/**
  *rev_string - function that reverses the strings
  *@s: the string to reverse
  */

void rev_string(char *s)
{
	char rev = s[0];
	int cpt = 0;
	int i;

	while (s[cpt] != '\0')
	{
		cpt++;
	}
	for (i = 0; i < cpt; i++)
	{
		cpt--;
		rev = s[i];
		s[i] = s[cpt];
		s[cpt] = rev;
	}
}
