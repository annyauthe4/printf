#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_str(const char *str);
int print_ch(int ch);
int _putchar(char c);

#endif
