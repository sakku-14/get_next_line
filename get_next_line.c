/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:39:50 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/29 14:33:42 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int gnl_overwite(char *save, char **line, char *buf)
{
	size_t	len;
	size_t	len_after;
	char	*tmp;

	len = 0;
	while (*save != '\n')
		len++
	if (!(*line = malloc(sizeof(char) * (len + 1))))
		return (-1);//error処理
	ft_strlcpy(*line, save, len + 1);
	len_after = ft_strlen(save + len + 1);
	if (!(tmp = malloc(sizeof(char) * (len_after + 1))))
		return (-1);//error処理
	ft_strlcpy(tmp, save + len + 1, len_after + 1);
	save = tmp;
	free(buf);
	return (1);
}

int gnl_lastact(char *save, char **line, char *buf)
{
	size_t	len;

	len = ft_strlen(*s);
	if (!(*line = malloc(sizeof(char) * (len + 1))))
		return (-1);//error処理
	ft_strlcpy(*line, save, len + 1);
	free(buf);
	free(save);
	save = NULL;
	return (0);
}

int get_next_line(int fd, char **line)
{
	ssize_t len;
	static char *save[FD_MAX];
	char *buf;

	if (!line || fd < 0 || fd > FD_MAX)
		return (-1);
	if (!save[fd])
		if (!(s[fd] = ft_calloc(1, sizeof(char))))
			return (-1);
	if (!(buf = malloc(BUFFER_SIZE)))
	{
		free(save[fd]);
		save[fd] = NULL;
		return (-1);
	}
	if (ft_memchr(save[fd], '\n', ft_strlen(save[fd])))
	{
		return (gnl_overwite(save[fd], line, buf));
	}
	while ((len = read(fd, buf, BUFFER_SIZE)) >= 0)
	{
		//buf内をsave[fd]へくっつける
		if (gnl_attach(buf, save[fd], len))
			return (-1);//error
		//buf内に改行があるか
		if (ft_memchr(buf, '\n', len))
			return (gnl_overwite(save[fd], line, buf));
		//lenの長さを基にファイルの終端かどうか確認する
		if (len < BUFFER_SIZE)
			return (gnl_lastact(save[fd], line, buf));
	}
	return (-1);//error
}
