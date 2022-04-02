/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:12:00 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/25 22:54:31 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_rotate(t_list **lst)
{
	t_list	*new;

	new = (*lst);
	(*lst) = (*lst)->next;
	new->next = NULL;
	ft_lstadd_back(lst, new);
	if ((*lst)->stack == 'a')
		write(1, "ra\n", 3);
	if ((*lst)->stack == 'b')
		write(1, "rb\n", 3);
}

void	ft_rr(t_list **lst)
{
	t_list	*new;

	new = (*lst);
	(*lst) = (*lst)->next;
	new->next = (*lst);
	new->next = NULL;
	ft_lstadd_back(lst, new);
}

void	ft_rotate_rr(t_list **lst1, t_list **lst2)
{
	ft_rr(lst1);
	ft_rr(lst2);
	write(1, "rr\n", 3);
}
