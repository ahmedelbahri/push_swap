/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:43:13 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/02 01:04:36 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/uio.h>
# include <sys/types.h>

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

// utils_bonus/content_bonus
void	ft_push(t_list **lst1, t_list **lst2);
void	ft_rotate(t_list **lst);
void	ft_rotate_rr(t_list **lst1, t_list **lst2);
int		ft_revrotate(t_list **lst);
void	ft_revrotate_rrr(t_list **lst1, t_list **lst2);
int		ft_swap(t_list **lst);
void	ft_swap_ss(t_list **a, t_list **b);
// utils_bonus/include_bonus
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
size_t	ft_strlen(const char *s);
long	ft_atoi(const char	*str);
int		ft_strcmp(char *s1, char *s2);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
// content_bonus/errors_bonus
void	ft_error(char *msg);
void	arg_check(int argc, char *argv[], t_list **num);
// get_next_line/get_next_line
char	*get_next_line(int fd);
char	*ft_get_line_after(char *buffer);
char	*ft_get_line_before(char *buffer);
char	*ft_read_file(char *save, int fd);
// get_next_line/get_next_line_utils
int		ft_strchr(const char *s);
char	*ft_strdup(const char *s1);
size_t	ft_strlen_gnl(const char *s);
char	*ft_strjoin(char *buffer, char *new);

#endif