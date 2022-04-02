/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahel-bah <ahel-bah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 14:09:25 by ahel-bah          #+#    #+#             */
/*   Updated: 2022/04/01 23:23:21 by ahel-bah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

char	*ft_get_line_after(char *buffer)
{
	int		i;
	int		j;
	char	*the_rest;

	i = 0;
	j = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\0')
		return (0);
	if (buffer[i] == '\n')
		i++;
	the_rest = malloc(sizeof(char) * ((ft_strlen_gnl(buffer) - i) + 1));
	if (the_rest == 0)
		return (0);
	j = 0;
	while (buffer[i])
		the_rest[j++] = buffer[i++];
	the_rest[j] = '\0';
	if (ft_strlen_gnl(the_rest) != 0)
		return (the_rest);
	free(the_rest);
	return (0);
}

char	*ft_get_line_before(char *buffer)
{
	int		i;
	char	*s_before;
	int		j;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	s_before = malloc((i + 1) * sizeof(char));
	if (s_before == 0)
	{
		free(buffer);
		return (0);
	}
	j = 0;
	while (j < i)
	{
		s_before[j] = buffer[j];
		j++;
	}
	s_before[j] = '\0';
	return (s_before);
}

char	*ft_read_file(char *buffer, int fd)
{
	int		read_bytes;
	char	*new;

	read_bytes = 1;
	new = malloc(sizeof(char) * 2);
	if (new == 0)
		return (0);
	while (read_bytes != 0 && ft_strchr(buffer) == 0)
	{
		read_bytes = read(fd, new, 1);
		if (read_bytes == -1)
		{
			free(new);
			return (0);
		}
		new[read_bytes] = '\0';
		if (read_bytes == 0)
			break ;
		buffer = ft_strjoin(buffer, new);
	}
	free(new);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*ret;
	char		*tobefreed;

	if (fd < 0)
		return (0);
	buffer = ft_read_file(buffer, fd);
	if (buffer == 0)
		return (0);
	ret = ft_get_line_before(buffer);
	tobefreed = buffer;
	buffer = ft_get_line_after(buffer);
	free(tobefreed);
	return (ret);
}
