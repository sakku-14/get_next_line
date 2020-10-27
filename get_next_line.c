/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:39:50 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/27 22:09:57 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	ssize_t len;
	static char *save[FD_MAX];
	char *buf;

	if (!line || fd < 0 || fd > FD_MAX)
		//error action
	if (!save[fd])
		//error action
	if (!(buf = malloc(BUFFER_SIZE)))
		//error action
	if (ft_memchr(save[fd], '\n', ft_strlen(save[fd])))
		//'\n'があった時の処理
	while ((len = read(fd, buf, BUFFER_SIZE)) >= 0)
	{
		
	}

}
