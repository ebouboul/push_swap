#include"push_swap.h"

int	stack_len(t_stack_node *stack)
{
	int	count;

	if (NULL == stack)
		return (0);
	count = 0;
	while (stack)
	{
		++count;
		stack = stack->next;
	}
	return (count);
}


#include <limits.h>

t_stack_node	*find_last_node(t_stack_node *head)
{
	if (NULL == head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

void append_node(t_stack_node **stack, int nbr)
{
    t_stack_node *node;
    t_stack_node *last_node;
    
    if(stack == NULL)
    return;
    node = malloc(sizeof(t_stack_node));
    if(stack == NULL)
    return;
    node->next = NULL;
    node->value = nbr;
    if(*stack == NULL)
    {
        *stack = node;
        node-> = NULL;
    }
    else
    {
        last_node = find_last_node(*stack);
        last_node->next = node;
        node->prev = last_node;
    }
}