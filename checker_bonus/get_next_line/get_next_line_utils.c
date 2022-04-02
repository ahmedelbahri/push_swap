/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:27:00 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/01 23:23:11 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

int	ft_strchr(const char *s)
{
	int	i;

	i = 0;
	if (s == 0)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlen_gnl(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc(ft_strlen_gnl(s1) * sizeof(char) + 1);
	if (s2 == 0)
		return (0);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strjoin(char *buffer, char *new)
{
	char	*al;
	size_t	i;
	size_t	j;

	if (!buffer)
		buffer = ft_strdup("");
	al = malloc(ft_strlen_gnl(buffer) + ft_strlen_gnl(new) + 1);
	if (al == 0)
		return (0);
	i = 0;
	while (buffer[i] != '\0')
	{
		al[i] = buffer[i];
		i++;
	}
	j = 0;
	while (new[j] != '\0')
		al[i++] = new[j++];
	al[i] = '\0';
	free(buffer);
	return (al);
}
