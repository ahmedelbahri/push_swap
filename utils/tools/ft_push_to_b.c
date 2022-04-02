/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:00:36 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/01 23:33:11 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_small_stack(t_data *data)
{
	if (data->tmp == 2 && ft_swap(&data->a))
		ft_error("");
	else if (data->a->content > data->a->next->content
		&& data->a->content > data->a->next->next->content
		&& data->a->next->content < data->a->next->next->content)
		ft_rotate(&data->a);
	else if (data->a->content < data->a->next->content
		&& data->a->content > data->a->next->next->content
		&& data->a->next->content > data->a->next->next->content)
		ft_revrotate(&data->a);
	else
		ft_swap(&data->a);
	return (1);
}

int	ft_is_five(t_data *data)
{
	data->tmp = ft_lstlen(data->a);
	data->tmp1 = 0;
	ft_push(&data->a, &data->b);
	ft_push(&data->a, &data->b);
	ft_small_stack(data);
	return (1);
}

void	ft_push_to_b(t_data *data, t_list *lis)
{
	data->tmp = ft_lstlen(data->a);
	if (ft_lstlen(lis) == data->tmp)
		ft_error("");
	if ((data->tmp <= 3 && ft_small_stack(data) && ft_freelist(lis))
		|| (data->tmp == 5 && ft_lstlen(lis) <= 2 && ft_is_five(data)))
		return ;
	data->temp = lis;
	ft_previous(&lis);
	lis = ft_lstlast(lis);
	while (data->tmp)
	{
		if (lis != NULL && data->a->index == lis->content)
		{
			ft_rotate(&data->a);
			lis = lis->previous;
		}
		else if (data->a)
			ft_push(&data->a, &data->b);
		data->tmp--;
	}
	if (data->a->next && data->a->content > data->a->next->content)
		ft_push(&data->a, &data->b);
	ft_freelist(data->temp);
}
