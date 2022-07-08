#include <math.h>
#include <stdio.h>
/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int max;
int i;

n = 612852475143;
max = -1;
{
max = 2;
n /= 2;
}
for (i = 3; 1 <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
max = i;
n = n / i;
}
}
if (n > 2)
max = n;
printf("%ld\n", max);
return (0);
}
