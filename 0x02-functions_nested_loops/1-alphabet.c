#include "main.h"
/**
* main - Entry point
*
* Return: always 0 (success)
*/

print_alphabet();

int main(void)
{
    print_alphabet();
    return (0);
}

void print_alphabet(){
  char i = 'a';
  for(i = 'a'; i <= 'z'; i++){
      putchar(i);
  }
}

