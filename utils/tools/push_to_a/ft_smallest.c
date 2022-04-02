/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smallest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 23:23:42 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/25 20:40:46 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

t_list	*ft_smallest(t_list *lst)
{
	t_list	*smallest;

	smallest = lst;
	while (lst != NULL)
	{
		if (lst->content < smallest->content)
			smallest = lst;
		lst = lst->next;
	}
	return (smallest);
}
