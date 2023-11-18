#include "main.h"

/**
 * _printf - produces output according to format
 * @format: character string
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	int count, i;
	char cent, perc;
	va_list args_mi;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	count = 0;
	va_start(args_mi, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, format + i, 1);
			count++;
		}
		else
		{
			i++;
			switch (format[i])
			{
				case 'c':
					count += print_ch(va_arg(args_mi, int));
					break;
				case 's':
					count += print_str(va_arg(args_mi, const char *));
					break;
				case '%':
					perc = '%';
					write(1, &perc, 1);
					count += 1;
					break;
				default:
					cent = '%';
					write(1, &cent, 1);
					write(1, format + i, 1);
					count += 2;
					break;
			}
		}
	}
	va_end(args_mi);
	return (count);
}
