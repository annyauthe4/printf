#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_str(const char *str);
int print_ch(int ch);
int _strlen(const char *format);
void print_int(int value);

#endif
