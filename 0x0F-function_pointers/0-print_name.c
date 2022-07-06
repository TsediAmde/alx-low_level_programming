#include "function_pointers.h"

/**
  * print_name - Prints a name
  * @name: character parameter
  * @f: character parameter
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
