#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
long y = 612852475143;
int z;

while (z++ < y / 2)
{
if (y % z == 0)
{
y /= 2;
continue;
}

for (z = 3; z < y / 2; z += 2)
{
if (y % z == 0)
y /= z;

}
}
printf("%ld\n", y);
return (0);
}
