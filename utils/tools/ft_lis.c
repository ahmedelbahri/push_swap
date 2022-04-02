/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 22:53:25 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/13 23:29:35 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_list	*ft_biggest_len(t_list *lst)
{
	t_list	*ret;

	ret = lst;
	while (lst != NULL)
	{
		if (lst->length >= ret->length)
			ret = lst;
		lst = lst->next;
	}
	return (ret);
}

t_list	*ft_lis(t_list *lst)
{
	t_list	*new;
	t_list	*tmp;
	int		end;

	end = 0;
	tmp = ft_biggest_len(lst);
	lst = tmp;
	while (lst != NULL)
	{
		if (end == 0)
		{
			new = ft_lstnew(lst->index);
			end = 1;
		}
		else if (lst->index == tmp->subseq)
		{
			ft_lstadd_back(&new, ft_lstnew(lst->index));
			tmp = lst;
		}
		lst = lst->previous;
	}
	return (new);
}
