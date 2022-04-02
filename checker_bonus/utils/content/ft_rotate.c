/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:12:00 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/01 23:37:51 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../checker.h"

void	ft_rotate(t_list **lst)
{
	t_list	*new;

	new = (*lst);
	(*lst) = (*lst)->next;
	new->next = NULL;
	ft_lstadd_back(lst, new);
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
}
