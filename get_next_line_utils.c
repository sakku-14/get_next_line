/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysakuma <ysakuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 13:43:34 by ysakuma           #+#    #+#             */
/*   Updated: 2020/10/29 18:20:49 by ysakuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ret;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if (!(ret = malloc(count * size)))
		return (NULL);
	ft_memset(ret, 0, count * size);
	return (ret);
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *bb;

	bb = (unsigned char*)b;
	while (len--)
		*bb++ = (unsigned char)c;
	return (b);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*src_c;
	int		len;

	src_c = (char *)src;
	len = ft_strlen(src);
	while (dstsize > 1 && *src_c)
	{
		*dst++ = *src_c++;
		dstsize--;
	}
	if (dstsize)
		*dst = '\0';
	return (len);
}

size_t	ft_strlen(const char *s)
{
	size_t len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_c;

	s_c = (unsigned char *)s;
	while (n--)
	{
		if (*s_c++ == (unsigned char)c)
			return ((void*)s);
		s++;
	}
	return (NULL);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t room;

	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	else
		len = ft_strlen(dst) + ft_strlen(src);
	room = dstsize - 1 - ft_strlen(dst);
	while (*dst)
		dst++;
	ft_strlcpy(dst, src, room + 1);
	return (len);
}
