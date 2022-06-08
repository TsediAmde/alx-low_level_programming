#include <stdio.h>
/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
int result = 0;
int counter = 1;
while (counter < 1024)
{
if ((counter % 3 == 0) || (counter % 5 == 0))
{
result += counter;
}
counter++;
}
printf("%d", result);
printf("\n");
return (0);
}
