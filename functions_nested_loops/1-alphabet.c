#include <stdio.h>
void print_alphabet(void);
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char i;

	for(i = 'a' ; i <= 'z' ; i++)
	{
	putchar(i);
	}
	putchar('\n');
}
