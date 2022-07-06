#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _islower(int c)
{
 char a;
  int lower =0;
  for (a = 'i'; a <= 'k'; a++)
  {
  if (a == c)
   lower = 1;
  }
  return (lower);
}


