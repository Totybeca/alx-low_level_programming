#include <stdlib.h>
#include <stdio.h>
#indlude "function_pointers.h"
/**
 * print_name -f points to func in main
 * @name: name
 * @f: pointer to print upp or non upp func
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NUL || f == NULL)
    return;
    f(name);
}

