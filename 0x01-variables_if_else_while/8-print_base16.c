#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = 0;
char dec = '0';
char hexas='a';
while (i < 16){
if (i <= 9){
putchar(dec);
}
else{
putchar(hexas);
hexas++;
}
dec++; 
i++;
}
putchar ('\n');
return (0);
}
