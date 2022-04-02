/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:27:15 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/01 22:27:01 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				content;
	char			stack;
	int				index;
	int				length;
	int				subseq;
	int				moves;
	struct s_list	*previous;
	struct s_list	*next;
}					t_list;

typedef struct s_data
{
	t_list			*a;
	t_list			*b;
	t_list			*least;
	t_list			*b_bro;
	t_list			*temp;
	int				tmp;
	int				tmp1;
}					t_data;

//utils/content
void	ft_push(t_list **lst1, t_list **lst2);
//
int		ft_swap(t_list **lst);
void	ft_swap_ss(t_list **lst1, t_list **lst2);
//
void	ft_rotate(t_list **lst);
void	ft_rotate_rr(t_list **lst1, t_list **lst2);
//
int		ft_revrotate(t_list **lst);
void	ft_revrotate_rrr(t_list **lst1, t_list **lst2);
//utils/errors
void	ft_error(char *msg);
long	ft_atoi(const char *str);
size_t	ft_strlen(const char *s);
int		ft_strcmp(char *s1, char *s2);
void	arg_check(int argc, char *argv[], t_list **num);
//utils/include
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
//utils/tools
t_list	*ft_lis(t_list *lst);
int		ft_lstlen(t_list *lst);
void	ft_index(t_list **lst);
void	ft_lis_data(t_list **lst);
void	ft_previous(t_list **lst);
int		ft_freelist(t_list *head);
void	ft_push_to_b(t_data *data, t_list *lis);
//utils/tools/push to a
t_list	*ft_biggest(t_list *a);
t_list	*ft_theleast(t_list *b);
t_list	*ft_smallest(t_list *lst);
void	ft_push_to_a(t_data *data);
void	ft_move_count(t_data *data);
t_list	*ft_hisbrother(t_list *least, t_list *a);

#endif
