#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int));
int _putchar(char c);

void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */
