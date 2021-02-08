/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:11:52 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/28 09:56:12 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*buf_s;
	size_t			i;

	i = 0;
	buf_s = (unsigned char *)s;
	while (i < n)
	{
		if (buf_s[i] == (unsigned char)c)
			return (&buf_s[i]);
		i++;
	}
	return (0);
}
