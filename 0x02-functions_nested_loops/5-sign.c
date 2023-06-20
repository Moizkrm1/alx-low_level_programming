#include "main.h"
/**
*print_sign - is a function that prints the sign of a number
*@n: int to check
*Return: 1 then + if n is greater than 0, elseif n is 0 print 0
*else -1 and print - if n is less than 0
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
