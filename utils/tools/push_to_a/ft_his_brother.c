/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_his_brother.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 20:39:30 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/03/25 20:39:52 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

t_list	*ft_hisbrother(t_list *least, t_list *a)
{
	t_list	*his_brother;

	his_brother = ft_biggest(a);
	if (least->content > his_brother->content)
		return (ft_smallest(a));
	while (a != NULL)
	{
		if (a->content > least->content && a->content < his_brother->content)
			his_brother = a;
		a = a->next;
	}
	return (his_brother);
}
