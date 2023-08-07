#include "main.h"

/**
  *_isupper - to check if c is uppercase
  *@c: the int to be checked
  *Return: 1 if c is upercase 0 if not
  */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
