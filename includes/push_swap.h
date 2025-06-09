/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebenoist <ebenoist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 11:25:59 by ebenoist          #+#    #+#             */
/*   Updated: 2025/06/09 13:34:12 by ebenoist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_pile
{
    void   *top;
    void   *bot;
    int     size;
}   t_pile;

void    pile_init(t_pile *p);
void    pile_clear(t_pile *p);
void    op_pa(t_pile *a, t_pile *b);
void    op_pb(t_pile *a, t_pile *b);
void    op_sa(t_pile *a);
void    op_ra(t_pile *a);
void    op_rra(t_pile *a);

#endif
