/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:12:48 by matsokoe          #+#    #+#             */
/*   Updated: 2019/06/11 15:22:41 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	len_dest;
	size_t	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (n <= len_dest)
		return (n + len_src);
	if (len_src < n - len_dest)
	{
		ft_memcpy(dest + len_dest, src, len_src);
		dest += len_dest + len_src;
	}
	else
	{
		ft_memcpy(dest + len_dest, src, n - len_dest - 1);
		dest += n - 1;
	}
	*dest = '\0';
	return (len_src + len_dest);
}
