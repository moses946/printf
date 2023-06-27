#include <stdarg.h>
#include "main.h"

/**
  * _printf - Prints to standard output depending on the format
  * @format: Content to be printed.
  *
  * Return: Number of characters printed to stdout
  */
int _printf(const char *format, ...)
{
	int count = 0, n;
	va_list ap;

	va_start(ap, format);
	
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				_putchar(va_arg(ap, int));
				count++;
			}
			else if (*format == 's')
			{
				count += _puts(va_arg(ap, char *));
			}
			else if (*format == 'r')
			{
				count += _puts_reversed(va_arg(ap, char *));
			}
			else if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else if (*format == 'd' || *format == 'i')
			{
				n = va_arg(ap, int);
				while (n < 0)
				{
					_putchar('-');
					count++;
					n = n * -1;
					break;
				}
				count += print_int(n);
			}
			else if (*format == 'b')
			{
				count += int_to_bin(va_arg(ap, int));
			}
			else
			{
				_putchar(*format);
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
