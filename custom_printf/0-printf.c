#include "_printf.h"

/**
 * _printf - produces output according to format
 * @format: character string
 *
 * Return: number of character printed
 */
int _printf(const char *format, ...)
{
	char *str;
	int count;
	va_list args_mi;

	count = 0;
	if (format == NULL)
		return (-1);
	va_start(args_mi, format);
	while (*format)
	{
		if (*format == '%' && (format + 1) != '\0')
		{
			format++;
			switch (*format)
			{
				case 'c':
					write(1, &va_arg(args_mi, int), 1);
					count++;
					break;
				case 's':
				{
					str = va_arg(args_mi, char*);
					if (str != NULL)
					{
						while (str != '\0')
						{
							write(1, str, 1);
							str++;
							count++;
						}
					}
					else
					{
						write(1, "(null)", 6);
						count += 6;
					}
				}
				break;
				case '%':
					write(1, "%", 1);
					count++;
					break;
				default:
					write(1, "%", 1);
					write(1, format, 1);
					count += 2;
					break;
			}
		}
		else
		{
			write(1, format, 1);
			count++;
		}
		format++
	}
	va_end(args_mi);
	return (count);
}
