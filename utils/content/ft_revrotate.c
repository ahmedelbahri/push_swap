/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:53:36 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/27 20:37:18 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_lstbeforelast(t_list **lst)
{
	while ((*lst)->next->next != NULL)
		(*lst) = (*lst)->next;
}

int	ft_revrotate(t_list **lst)
{
	t_list	*new;
	t_list	*b_last;

	b_last = (*lst);
	ft_lstbeforelast(&b_last);
	new = b_last->next;
	b_last->next = NULL;
	ft_lstadd_front(lst, new);
	if ((*lst)->stack == 'a')
		write(1, "rra\n", 4);
	if ((*lst)->stack == 'b')
		write(1, "rrb\n", 4);
	return (1);
}

void	ft_rrr(t_list **lst)
{
	t_list	*new;
	t_list	*b_last;

	b_last = (*lst);
	ft_lstbeforelast(&b_last);
	new = b_last->next;
	b_last->next = NULL;
	ft_lstadd_front(lst, new);
}

void	ft_revrotate_rrr(t_list **lst1, t_list **lst2)
{
	ft_rrr(lst1);
	ft_rrr(lst2);
	write(1, "rrr\n", 4);
}
