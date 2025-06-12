/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:25:59 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/12 11:38:29 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_liste
{
    t_list  *a;
    t_list  *b;
    int     size;
}   t_pile;

void	ft_error_free_split(t_list **a, char **av, int sp);
int     ft_atoi2(t_list *a, char *avi, char **av, int sp);
t_list  *ft_create_stack(int ac, char **av, int sp);
void	free_programme(t_list **a, t_list **b, char **av, int sp);
void	ft_check_twins(t_list *a, char **av, int sp);
#endif
