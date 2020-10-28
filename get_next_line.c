/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:39:50 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/28 17:06:42 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	ssize_t len;
	static char *save[FD_MAX];
	char *buf;

	if (!line || fd < 0 || fd > FD_MAX)
		return (-1);)
	if (!save[fd])
		//
	if (!(buf = malloc(BUFFER_SIZE)))
		//error action
	if (ft_memchr(save[fd], '\n', ft_strlen(save[fd])))
		//'\n'があった時の処理
	while ((len = read(fd, buf, BUFFER_SIZE)) >= 0)
	{
		//buf内をs[fd]へくっつける
		//buf内に改行があるか
		//lenの長さを基にファイルの終端かどうか確認する
	}
}
