<<<<<<< HEAD

=======
#include <stdio.h>
/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
int numLeft;
int numLast;
for (numLeft = 0; numLeft < 100; numLeft++)
{
for (numLast = 0; numLast < 100; numLast++)
{
if (numLeft < numLast)
{
putchar(numLeft / 10 + 48);
putchar(numLeft % 10 + 48);
putchar(32);
putchar(numLast / 10 + 48);
putchar(numLast % 10 + 48);
if (numLeft < 98)
{
putchar(44);
putchar(32);
}
}
}
}
putchar('\n');
return (0);
}
>>>>>>> 4469c8eeb5f9cbcedb31e4c9eeee95aaf5a1e6d8
