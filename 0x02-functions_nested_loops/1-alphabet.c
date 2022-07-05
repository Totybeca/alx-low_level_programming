#include <stdio.h>
#include <main.h>
/**
* main - Entry point
*
* Return: always 0 (success)
*/

void print_alphabet(){
for(char i = 'a'; i <= 'z'; i++){
putchar(i);
}
}

int main(void)
{
  
print_alphabet();
putchar('\n');
return (0);
}
