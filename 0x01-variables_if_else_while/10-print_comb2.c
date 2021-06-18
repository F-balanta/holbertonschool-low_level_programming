#include <stdio.h>
/**
 * main - My main function
 *
 * Return: int
 **/
int main(void)
{
int num, num2;
for (num = 0 ; num <= 9; num++)
{
for (num2 = 0 ; num2 <= 9; num2++)
{
putchar(num + '0');
putchar(num2 + '0');
if (!(num == 9 && num2 == 9))
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}
