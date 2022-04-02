/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 17:49:49 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/19 17:50:13 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_lstlen(t_list *lst)
{
	int	lstlen;

	lstlen = 0;
	while (lst != NULL)
	{
		lstlen++;
		lst = lst->next;
	}
	return (lstlen);
}
