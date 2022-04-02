/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 23:37:58 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/01 23:32:04 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../checker.h"

void	ft_isnum(char *s)
{
	int	j;

	j = 0;
	while (s[j])
	{
		if ((s[j] == '-' && j == 0) || (s[j] <= '9' && s[j] >= '0'))
			j++;
		else
			ft_error("Error:\n Some arguments aren't integers.");
	}
}

void	ft_cmp(int argc, char *argv[], int i)
{
	int		cmp;

	cmp = i + 1;
	while (cmp < argc)
	{
		if (ft_strcmp(argv[i], argv[cmp]) == 0)
			ft_error("Error:\n there are duplicates.");
		cmp++;
	}
}

void	arg_check(int argc, char *argv[], t_list **num)
{
	int		i;
	long	swap;

	i = 1;
	if (argc == 1)
		ft_error("");
	while (i < argc)
	{
		ft_isnum(argv[i]);
		ft_cmp(argc, argv, i);
		swap = ft_atoi(argv[i]);
		if (swap > 2147483647 || swap < -2147483648)
			ft_error("Error\n Some arguments are bigger than an integer.");
		if (i == 1)
			(*num) = ft_lstnew(swap);
		else
			ft_lstadd_back(&(*num), ft_lstnew(swap));
		i++;
	}
}
