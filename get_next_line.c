/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:39:50 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/22 18:53:41 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	ssize_t len;
	static char *buf;

	if (!line || fd < 0 || fd > FD_MAX)
		//error action
	if (!(buf = malloc(sizeof(char) * (BUFFER_SIZE + 1))))
		//error action
	len = 0;
	if (!(len = read(fd, buf, BUFFER_SIZE)) < 0)
		//error action
	while (*buf)
	{
		if (*buf == '\n')
			break;
		*line++ = *buf++;
	}

}
