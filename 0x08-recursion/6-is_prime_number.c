#include "main.h"
/**
* prime2 - Makes possible to evaluate from 1 to n
* @i: same number as n
* @j: number that iterates from 1 to n
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int prime2(int i, int j)
{
if (i == j)
return (1);
else if (i % j == 0)
return (0);
return (prime2(i, j + 1));
}
/**
* is_prime_number - checks if a number is prime
* @n: Number Integer
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime2(n, 2));
}
