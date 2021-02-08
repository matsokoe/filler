/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:12:16 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/29 09:46:06 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*buf_s1;
	unsigned char	*buf_s2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	buf_s1 = (unsigned char *)s1;
	buf_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (buf_s1[i] != buf_s2[i])
			return (buf_s1[i] - buf_s2[i]);
		i++;
	}
	return (0);
}
