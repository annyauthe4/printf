#include "main.h"

/**
 * _printf - produces output according to format
 * @format: character string
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	int count, i;
	va_list args_mi;

	count = 0;
	va_start(args_mi, format);
	for (i = 0; i < _strlen(format); i++)
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += print_ch(va_arg(args_mi, int));
					i++;
					break;
				case 's':
					count += print_str(va_arg(args_mi, const char *));
					i++;
					break;
				case '%':
					write(1, &format[i + 1], 1);
					count++;
					break;
				case 'i':
					print_int(va_arg(args_mi, int));
					i++;
					break;
				case 'd':
					print_int(va_arg(args_mi, int));
					i++;
					break;
				case 'b':
					print_bin(va_arg(args_mi, int));
					i++;
					break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	va_end(args_mi);
	return (count);
}
