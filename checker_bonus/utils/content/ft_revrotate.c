/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revrotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 20:53:36 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/02 01:33:45 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../checker.h"

void	ft_lstbeforelast(t_list **lst)
{
	while ((*lst)->next->next != NULL)
		(*lst) = (*lst)->next;
}

int	ft_revrotate(t_list **lst)
{
	t_list	*new;
	t_list	*b_last;

	if ((*lst) && (*lst)->next)
	{
		b_last = (*lst);
		ft_lstbeforelast(&b_last);
		new = b_last->next;
		b_last->next = NULL;
		ft_lstadd_front(lst, new);
	}
	return (1);
}

void	ft_revrotate_rrr(t_list **lst1, t_list **lst2)
{
	ft_revrotate(lst1);
	ft_revrotate(lst2);
}
