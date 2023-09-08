#include <stdlib.h>
#include <time.h>
/**
 * main - it's if , if else function
 * betty style doc for function main goes there
 * Return: always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if ("n > 0")
{
printf("%lu is positive\n", n);
}
else if ("n == 0")
{
printf("%lu is zero\n", n);
}
else
{
printf("%lu is negative\n", n);
}
return (0);
}
