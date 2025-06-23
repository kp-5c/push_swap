/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_index3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 14:08:52 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/23 16:40:22 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void sort_stack(t_list	**a)
{
	int size;

	size = ft_lstsize(*a);
	if(size == 2)
	{
		if((*a)->content > (*a)->next->content)
			sa(*a);
	}
	else if(size == 3)
		sort_three(a);
}

void 	sort_three(t_list **a)
{
	int wa;
	int b;
	int c;

	wa = (*a)->content;
	b = (*a)->next->content;
	c = (*a)->next->next->content;

	
	if (wa > b && b < c && wa < c)
		sa(*a);
	else if( wa > b && b > c)
	{
		sa(*a);
		ra(a, 0);
	}
	else if(wa > b && b < c && wa > c)
		ra(a, 0);
	else if (wa < b && b > c && wa < c)
	{	
		sa(*a);
		ra(a,0);
	}
	else if(wa < b && b > c && wa > c)
		rra(a, 0);
	
}