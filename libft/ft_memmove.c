/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:11:37 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/28 17:00:17 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*buf_dst;
	unsigned char	*buf_src;
	size_t			i;

	i = 0;
	buf_dst = (unsigned char *)dst;
	buf_src = (unsigned char *)src;
	if (buf_dst == NULL && buf_src == NULL)
		return (NULL);
	if (buf_dst > buf_src)
	{
		while (i < len)
		{
			buf_dst[len - 1] = buf_src[len - 1];
			len--;
		}
	}
	else
		while (i < len)
		{
			buf_dst[i] = buf_src[i];
			i++;
		}
	return (buf_dst);
}
