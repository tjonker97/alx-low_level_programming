#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print combinations of 2 digit numbers'
 * Return: 0
 */

int main(void)
{
int i, j;

for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
int tens_i = i / 10;
int ones_i = i % 10;
int tens_j = j / 10;
int ones_j = j % 10;

putchar('0' + tens_i);
putchar('0' + ones_i);
putchar(' ');
putchar('0' + tens_j);
putchar('0' + ones_j);

if (i != 99 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}

return (0);
}

