/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 09:34:16 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/27 10:40:25 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*buf_dst;
	unsigned char	*buf_src;
	size_t			i;

	buf_dst = dst;
	buf_src = (unsigned char *)src;
	i = -1;
	if (buf_dst == NULL && buf_src == NULL)
		return (NULL);
	while (++i < n)
		buf_dst[i] = buf_src[i];
	return (buf_dst);
}
