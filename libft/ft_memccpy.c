/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:11:24 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/28 16:59:12 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;
	size_t			i;
	size_t			j;

	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	i = 0;
	j = 0;
	while (i < n)
	{
		ptr_dst[j] = ptr_src[i];
		if (ptr_dst[j] == (unsigned char)c)
			return (&ptr_dst[j + 1]);
		i++;
		j++;
	}
	return (NULL);
}
