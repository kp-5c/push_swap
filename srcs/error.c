/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 15:38:28 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/09 16:29:38 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(void)
{
	write(2, "Error/n", 6);
	exit(1);
}
void	free_split(char **tab)
{
	int	i;
	
	i = 0;
	if(!tab)
		return;
	while(tab[i])
		free(tab[i++]);
	free(tab);
}
