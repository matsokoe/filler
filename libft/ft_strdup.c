/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:12:30 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/24 14:07:12 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dst;
	char	*buf_s1;

	buf_s1 = (char *)s1;
	dst = (char *)malloc(sizeof(char) * ft_strlen(buf_s1) + 1);
	if (dst == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		dst[i] = buf_s1[i];
	dst[i] = '\0';
	return (dst);
}
