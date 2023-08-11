#include "main.h"

/**
* *malloc_checked - allocates memory using malloc
* @a: number of bytes to allocate
*
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int a)
{
void *pnt;

pnt = malloc(a);

if (pnt == NULL)
{
exit(98);
}
return (pnt);
}
