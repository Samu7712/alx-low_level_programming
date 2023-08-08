#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicate to current memory location
* @str: char
* Return: NULL
*/
char *_strdup(char *str)
{
char *as;
int i, r = 0;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;

as = malloc(sizeof(char) * (i + 1));

if (as == NULL)
return (NULL);

for (r = 0; str[r]; r++)
as[r] = str[r];

return (as);
}
