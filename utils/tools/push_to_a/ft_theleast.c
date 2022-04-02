/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_theleast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 00:35:54 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/26 00:38:49 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

t_list	*ft_theleast(t_list *b)
{
	t_list	*least_moves;

	least_moves = b;
	while (b != NULL)
	{
		if (b->moves < least_moves->moves)
			least_moves = b;
		b = b->next;
	}
	return (least_moves);
}
