#include <stdio.h>
/**
* main - Entry point
*
* Return: always 0 (success)
*/

void print_alphabet(){
  char i = 'a';
  for(i = 'a'; i <= 'z'; i++){
    _putchar(i);
  }
}

int main(void)
{
  
print_alphabet();
_putchar('\n');
return (0);
}
