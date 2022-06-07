#include "main.h"
/**
* _islower - checks for lowercase character
*
* Return: Always 1 if character is lower , 0 otherwise
*/
int _islower(int c)
{
if((c >= 'a') && (c <= 'z'))
return (1);
else
return (0);
}
