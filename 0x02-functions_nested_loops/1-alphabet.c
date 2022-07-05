#include "main.h"
/**
* main - Entry point
*
* Return: always 0 (success)
*/

void print_alphabet(){
  char i = 'a';
  for(i = 'a'; i <= 'z'; i++){
      putchar(i);
  }
}

int main(void)
{
    print_alphabet();
    return (0);
}


