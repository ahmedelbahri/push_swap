/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:37:24 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/01 22:34:36 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../checker.h"

t_list	*ft_lstnew(int content)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	if (lst == 0)
		return (0);
	lst->content = content;
	lst->length = 1;
	lst->stack = 'a';
	lst->previous = NULL;
	lst->next = NULL;
	return (lst);
}
