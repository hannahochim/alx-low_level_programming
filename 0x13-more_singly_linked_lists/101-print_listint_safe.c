#include "lists.h"

/**
 * print_listint_safe - Function prints a linked list
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t cnt = 0;
	size_t index = 0;
	listint_t const **array;/* A */

	array = malloc(sizeof(listint_t *) * 1024);
	if (!array)
		exit(98);
	unsigned int i = 0;
	unsigned int flag = 0;

	while (head != NULL)/* B */
	{
		for (i = 0; i < cnt; i++)/* C*/
		{
			if (head == array[i])/* D */
			{
				flag = 1;
				index = i;
				break;
			}
			else
				flag = 0;
		}

		if (flag == 1)/* E */
			break;
		array[cnt] = head;
		head = head->next;
		cnt++;
	}

	i = 0;
	while (i < cnt)/* F */
	{
		printf("[%p] %d\n", (void *)array[i], array[i]->n);
		i++;
	}
	if (flag == 1)/* G */
	{
		printf("-> [%p] %d\n", (void *)array[index], array[index]->n);
	}
	free(array);
	return (cnt);
}
