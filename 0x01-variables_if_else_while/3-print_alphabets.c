#include<stdio.h>

/**
  *main - printing the alphaets in lowercase and uppercase
  *Return: always 0
  */

int main(void)
{
	int charac;

	for (charac = 'a'; charac <= 'z'; charac++)
		putchar(charac);
	for (charac = 'A'; charac <= 'Z'; charac++)
		putchar(charac);
	putchar('\n');
	return (0);
}
