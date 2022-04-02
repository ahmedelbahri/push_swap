/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lis_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:01:16 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/25 15:52:42 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	ft_lis_data(t_list **lst)
{
	t_list	*i;
	t_list	*j;

	ft_index(lst);
	ft_previous(lst);
	i = (*lst)->next;
	while (i != NULL)
	{
		j = (*lst);
		while (j->index < i->index)
		{
			if (j->content < i->content && j->length + 1 >= i->length)
			{
				i->length = 1 + j->length;
				i->subseq = j->index;
			}
			j = j->next;
		}
		i = i->next;
	}
}
