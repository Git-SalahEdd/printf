#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024
#define NULL_STRING "(null)"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int chk(const char *format);
int str(const char *s);
int ptr_num(int num);
int ptr_num2(int num);
int _print_binary(unsigned int num);
int _strncpy(char *dest, const char *src, int n);

#endif
