#include "main.h"
#include <stdlib.h>

/**
 * *_realloc -  reallocate mem block using
 * @ptr: void pointr
 * @old_size: already allocated size
 * @new_size: new size to be allocated
 * Return: pointer, null on failure
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *ch;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	ch = malloc(new_size * sizeof(char));
	if (ch == NULL)
		return (NULL);
	i = 0;
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			ch[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (ch);
	}

	while (i < new_size)
	{
		ch[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (ch);
}
