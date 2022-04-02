/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:34:33 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/08 23:46:34 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst1;

	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	lst1 = ft_lstlast(*lst);
	lst1->next = new;
}
