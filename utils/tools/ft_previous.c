/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_previous.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 23:33:25 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/11 16:15:50 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_previous(t_list **lst)
{
	t_list	*lst1;
	t_list	*lst2;

	lst1 = (*lst);
	lst2 = (*lst)->next;
	while (lst2 != NULL)
	{
		lst2->previous = lst1;
		lst1 = lst1->next;
		lst2 = lst2->next;
	}
}
