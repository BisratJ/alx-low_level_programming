#include "main.h"
<<<<<<< HEAD
/**
 * main - prints _putchar
 * Description: prints _putchar
 * Return: 0 (Success)
 */
int main(void)
{
char text[9] = "_puthcar';
int i = 0;
for (i = 0; i < 8; i++)
{
_putchar(text[i]);
=======

/**
 * main - Entry point
 * Return:0
 */

int main(void)
{
char text[9] = "_putchar";
int i = 0;
for (i = 0; i < 8; i++)
{
<<<<<<< HEAD
_putchar(c[i]);
i++;
>>>>>>> 4469c8eeb5f9cbcedb31e4c9eeee95aaf5a1e6d8
=======
_putchar(text[i]);
>>>>>>> 9a5c5d3a7b2c633d17c349ba0f57fa457fc14721
}
_putchar('\n');
return (0);
}
