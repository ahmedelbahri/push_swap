/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_biggest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:41:10 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/25 20:54:14 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

t_list	*ft_biggest(t_list *a)
{
	t_list	*ret;

	ret = a;
	while (a != NULL)
	{
		if (a->content > ret->content)
			ret = a;
		a = a->next;
	}
	return (ret);
}
