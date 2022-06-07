#include "main.h"
/**
* _islower - checks for lowercase character
*
* Return: if c is lower return 1 , otherwise 0
*/
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
return (1);
else
return (0);
}
