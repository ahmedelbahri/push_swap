/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 10:57:32 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/31 18:56:07 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_data	data;
	t_list	*smallest;

	arg_check(argc, argv, &(data.a));
	ft_lis_data(&data.a);
	ft_push_to_b(&data, ft_lis(data.a));
	ft_push_to_a(&data);
	ft_index(&data.a);
	smallest = ft_smallest(data.a);
	if (smallest->index <= ft_lstlen(data.a) / 2)
	{
		while (data.a != smallest)
			ft_rotate(&data.a);
	}
	else if (smallest->index > ft_lstlen(data.a) / 2)
	{
		while (data.a != smallest)
			ft_revrotate(&data.a);
	}
	ft_freelist(data.a);
	ft_freelist(data.b);
	return (0);
}
