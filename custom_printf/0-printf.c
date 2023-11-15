#include "main.h"

/**
 * _printf - produces output according to format
 * @format: character string
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args_mi;

	va_start(args_mi, format);
	while (*format)
	{
		if (*format == '%' && format[1] != '\0')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += print_ch(va_arg(args_mi, int));
					break;
				case 's':
					count += print_str(va_arg(args_mi, char *));
					break;
				default:
					count += write(1, "%", 1);
					break;
			}
		}
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(args_mi);
	return (count);
}
