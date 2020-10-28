/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:39:50 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/28 19:30:32 by ysakuma          ###   ########.fr       */
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
		//error処理
	ft_strlcpy(*line, save, len + 1);
	len_after = ft_strlen(save + len + 1);
	if (!(tmp = malloc(sizeof(char) * (len_after + 1))))
		//error処理
	ft_strlcpy(tmp, save + len + 1, len_after + 1);
	save = tmp;
	free(buf);
	return (1);
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
		//buf内をs[fd]へくっつける
		//buf内に改行があるか
		//lenの長さを基にファイルの終端かどうか確認する
	}
}
