/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:15:18 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/26 19:17:21 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_swap(t_list **lst)
{
	int	swap;

	swap = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = swap;
	if ((*lst)->stack == 'b')
		write(1, "sb\n", 3);
	if ((*lst)->stack == 'a')
		write(1, "sa\n", 3);
	return (1);
}

void	ft_ss(t_list **lst)
{
	int	swap;

	swap = (*lst)->content;
	(*lst)->content = (*lst)->next->content;
	(*lst)->next->content = swap;
}

void	ft_swap_ss(t_list **a, t_list **b)
{
	ft_ss(a);
	ft_ss(b);
	write(1, "ss\n", 3);
}
