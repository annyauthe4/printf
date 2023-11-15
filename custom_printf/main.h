#ifndef _PRINTF_H
#define _PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>

int _printf(const char *format, ...);
int print_str(char *str);
int print_ch(int ch);

#endif
