#include<stdio.h>
/**
  *main - printing the alphabet
  *Return: always 0
  */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');
	return (0);
}
