/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:15:18 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/02 00:35:55 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../checker.h"

int	ft_swap(t_list **lst)
{
	int	swap;

	if ((*lst) && (*lst)->next)
	{
		swap = (*lst)->content;
		(*lst)->content = (*lst)->next->content;
		(*lst)->next->content = swap;
	}
	return (1);
}

void	ft_swap_ss(t_list **a, t_list **b)
{
	ft_swap(a);
	ft_swap(b);
}
