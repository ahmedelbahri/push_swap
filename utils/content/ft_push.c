/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 03:55:11 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/26 19:35:30 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	lst2_empty(t_list **lst1, t_list **lst2)
{
	(*lst2) = (*lst1);
	if ((*lst1)->stack == 'b')
		(*lst2)->stack = 'a';
	else
		(*lst2)->stack = 'b';
	if ((*lst1)->next == NULL)
		(*lst1) = NULL;
	else
		(*lst1) = (*lst1)->next;
	(*lst2)->next = NULL;
}

void	lst2_not_empty(t_list **lst1, t_list **lst2)
{
	t_list	*new;

	(*lst1)->stack = (*lst2)->stack;
	new = (*lst1);
	if ((*lst1)->next == NULL)
		(*lst1) = NULL;
	else
	{
		(*lst1) = (*lst1)->next;
		new->next = NULL;
	}
	ft_lstadd_front(lst2, new);
}

void	ft_push(t_list **lst1, t_list **lst2)
{
	if (!(*lst1))
		return ;
	if (!(*lst2))
		lst2_empty(lst1, lst2);
	else
		lst2_not_empty(lst1, lst2);
	if ((*lst2)->stack == 'a')
		write(1, "pa\n", 3);
	if ((*lst2)->stack == 'b')
		write(1, "pb\n", 3);
}
