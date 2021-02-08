/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:57:09 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/29 09:46:24 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*buf;

	i = 0;
	buf = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			buf = (char *)&s[i];
		i++;
	}
	if (c == 0)
		return ((char *)&s[i]);
	return (buf);
}
