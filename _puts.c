#include "main.h"
/**
  * _puts - Prints a string to stdout.
  * @str: String to be printed.
  *
  * Return: Number of characters printed.
  */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (i);
}
