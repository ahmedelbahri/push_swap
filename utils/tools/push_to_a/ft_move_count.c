/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_count.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:08:36 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/26 17:58:09 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

int	ft_counter(t_data *data, int l_a, int l_b)
{
	if (data->b->index <= l_b / 2 && data->b_bro->index <= l_a / 2)
	{
		if (data->b->index >= data->b_bro->index)
			data->b->moves = data->b->index + 1;
		else if (data->b->index < data->b_bro->index)
			data->b->moves = data->b_bro->index + 1;
		return (1);
	}
	else if (data->b->index > l_b / 2 && data->b_bro->index > l_a / 2)
	{
		if (l_b - data->b->index >= l_a - data->b_bro->index)
			data->b->moves = l_b - data->b->index + 1;
		else if (l_b - data->b->index < l_a - data->b_bro->index)
			data->b->moves = l_a - data->b_bro->index + 1;
		return (1);
	}
	return (0);
}

void	ft_move_count(t_data *data)
{
	int	l_b;
	int	l_a;

	data->temp = data->b;
	ft_index(&data->a);
	ft_index(&data->b);
	l_b = ft_lstlen(data->b);
	l_a = ft_lstlen(data->a);
	while (data->b != NULL)
	{
		data->b_bro = ft_hisbrother(data->b, data->a);
		if (ft_counter(data, l_a, l_b))
			;
		else if (data->b->index <= l_b / 2 && data->b_bro->index >= l_a / 2)
			data->b->moves = data->b->index + l_a - data->b_bro->index + 1;
		else if (data->b->index >= l_b / 2 && data->b_bro->index <= l_a / 2)
			data->b->moves = data->b_bro->index + l_b - data->b->index + 1;
		data->b = data->b->next;
	}
	data->b = data->temp;
}
