#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
* rot13 - function that encodes a string using rot13
* @s: character parameter
*
* Return: s
*/
char *rot13(char *s)
{  
char* res = malloc(strlen(s));
char* current_char = res;
if(res != NULL)
{
strcpy(res, s); 
while(*current_char != '\0')
{
if((*current_char >= 97 && *current_char <= 122) || (*current_char >= 65 && *current_char <= 90))
{
if(*current_char > 109 || (*current_char > 77 && *current_char < 91))
{
*current_char -= 13;
}
else
{
*current_char += 13;
}
}
current_char++;
}
}
s = res;
return res;
}
