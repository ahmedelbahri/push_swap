/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 00:40:58 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/26 00:53:25 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

void	ft_is_up(t_data *data)
{
	if (data->least->index >= data->b_bro->index)
	{
		while (data->a != data->b_bro)
			ft_rotate_rr(&data->a, &data->b);
		while (data->b != data->least)
			ft_rotate(&data->b);
	}
	else
	{
		while (data->b != data->least)
			ft_rotate_rr(&data->a, &data->b);
		while (data->a != data->b_bro)
			ft_rotate(&data->a);
	}
}

void	ft_is_down(t_data *data, int l_b, int l_a)
{
	if (l_b - data->least->index >= l_a - data->b_bro->index)
	{
		while (data->a != data->b_bro)
			ft_revrotate_rrr(&data->a, &data->b);
		while (data->b != data->least)
			ft_revrotate(&data->b);
	}
	else
	{
		while (data->b != data->least)
			ft_revrotate_rrr(&data->a, &data->b);
		while (data->a != data->b_bro)
			ft_revrotate(&data->a);
	}
}

void	ft_is_diff(t_data *data, int l_b, int l_a)
{
	if (data->least->index <= l_b / 2 && data->b_bro->index >= l_a / 2)
	{
		while (data->b != data->least)
			ft_rotate(&data->b);
		while (data->a != data->b_bro)
			ft_revrotate(&data->a);
	}
	else if (data->least->index >= l_b / 2 && data->b_bro->index <= l_a / 2)
	{
		while (data->b != data->least)
			ft_revrotate(&data->b);
		while (data->a != data->b_bro)
			ft_rotate(&data->a);
	}
}

void	ft_push_to_a(t_data *data)
{
	int	l_b;
	int	l_a;

	while (data->b != NULL)
	{
		l_b = ft_lstlen(data->b);
		l_a = ft_lstlen(data->a);
		ft_move_count(data);
		data->least = ft_theleast(data->b);
		data->b_bro = ft_hisbrother(data->least, data->a);
		if (data->least->index <= l_b / 2 && data->b_bro->index <= l_a / 2)
			ft_is_up(data);
		else if (data->least->index > l_b / 2 && data->b_bro->index > l_a / 2)
			ft_is_down(data, l_b, l_a);
		else
			ft_is_diff(data, l_b, l_a);
		ft_push(&data->b, &data->a);
	}
}
