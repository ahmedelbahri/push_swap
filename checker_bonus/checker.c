/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:22:09 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/02 01:33:30 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	check_instruction(char *line, t_list **a, t_list **b)
{
	if (ft_strcmp(line, "sa\n") == 0)
		ft_swap(a);
	else if (ft_strcmp(line, "sb\n") == 0)
		ft_swap(b);
	else if (ft_strcmp(line, "ss\n") == 0)
		ft_swap_ss(a, b);
	else if (ft_strcmp(line, "pa\n") == 0)
		ft_push(b, a);
	else if (ft_strcmp(line, "pb\n") == 0)
		ft_push(a, b);
	else if (ft_strcmp(line, "ra\n") == 0)
		ft_rotate(a);
	else if (ft_strcmp(line, "rb\n") == 0)
		ft_rotate(b);
	else if (ft_strcmp(line, "rr\n") == 0)
		ft_rotate_rr(a, b);
	else if (ft_strcmp(line, "rra\n") == 0)
		ft_revrotate(a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		ft_revrotate(b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		ft_revrotate_rrr(a, b);
	else
		ft_error("Error:\n invalid element");
}

int	is_sorted(t_list **lst)
{
	t_list	*i;
	t_list	*j;

	i = (*lst);
	j = i->next;
	while (j)
	{
		if (i->content > j->content)
			return (0);
		i = i->next;
		j = j->next;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	char	*line;

	b = NULL;
	arg_check(argc, argv, &a);
	line = get_next_line(0);
	while (line)
	{
		check_instruction(line, &a, &b);
		line = get_next_line(0);
	}
	if (is_sorted(&a) && b == NULL)
		ft_error("OK");
	else
		ft_error("KO");
	return (0);
}
