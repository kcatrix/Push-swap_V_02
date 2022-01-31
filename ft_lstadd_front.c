#include "push_swap.h"

void	ft_lstadd_front(t_stack **alst, t_stack *new)
{
	new->next = *alst;
	*alst = new;
	return ;
}
