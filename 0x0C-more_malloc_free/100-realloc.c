#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - Entry point
  * @ptr: ptr
  * @old_size: old
  * @new_size: new
  *
  * Return:...
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	unsigned int x;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
	{
	c = malloc(new_size);

	if (c == NULL)
	return (NULL);

	return (c);
	}
	else
	{
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	}

	c = malloc(new_size);

	if (c == NULL)
	return (NULL);

	for (x = 0; x < old_size && x < new_size; x++)
	{
	c[x] = ((char *) ptr)[x];
	}

	free(ptr);
	return (c);
}

