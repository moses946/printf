#include "main.h"
#include <stdarg.h>

/**
  * _printf - It prints output to stdout
  * @format: The format of chars to print
  *
  * Return: On success, the number of characters printed
  */
int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			switch (*(++format))
			{
				case 'c':
					_putchar(va_arg(args, int));
					count++;
					break;
				case 's':
					i = _puts(va_arg(args, char *));
					count += i;
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				case 'd' || 'i':
					print_number(va_arg(args, int));
					break;
				default:
					_putchar(*(--format));
					_putchar(*(++format));
					count += 2;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	return (count);
}
