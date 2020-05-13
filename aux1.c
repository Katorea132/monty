#include "monty.h"
/**
 * delete_nodeIndx - Deletes a node at the index
 * @stack: Holds the stack
 * @index: Holds the place to delete
 * Return: 1 if succeed or -1 if it didn't
 */
int delete_nodeIndx(stack_t **stack, unsigned int index)
{
	unsigned int i;
	stack_t *tmp = *stack;
	stack_t *swapp = 0, *swapn = 0;

	for (i = 0; tmp; tmp = tmp->next, i++)
	{
		if (index == 0)
		{
			if (tmp->next)
			{
				swapn = tmp->next;
				swapn->prev = 0;
			}
			stack[0] = swapn;
			free(tmp);
			return (1);
		}
		else if (i == index)
		{
			swapp = tmp->prev;
			if (tmp->next)
				swapn = tmp->next, swapn->prev = swapp, swapp->next = swapn;
			else
				swapp->next = 0;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
