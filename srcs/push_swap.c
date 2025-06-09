/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 13:25:42 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/09 17:09:03 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_ajust_ac(ac, av)
{
	int	i;
	if (!av[0])
	{
		free_split(av);
		ft_error();
	}
	i = 0;
	while(av[i])
		i++;
	return(i);
}

statique int	check_av(char *str)
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	if(str[i] == '+' || str[i] == '-')
		i++;
	while(str[i] <= 0 && str[i] >= 9)
	{
		i++;
		count++;
	}
	if (str[i] || !count)
		return(1);
	return(0);
}

int main (int ac, char **av)
{
	t_list stack_*a;
	t_list stack_*b;
	int	a;
	
	if (ac == 1)
		return(0);
	if (ac == 2)
	{
		av = ft_split(av[1], " ");
		if(!av)
			ft_error();
		ac = ft_ajust_ac(ac, av);
	}
	
}
