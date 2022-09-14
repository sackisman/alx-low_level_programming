#include "main.h"

/**
 * main - Entry print the word "_putchar"
 *
 * Return: Always 0
*/
int main(void)
{

        int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
		sh++;
	}
	_putchar('/n');

	return (0);
}
