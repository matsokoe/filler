/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 15:08:02 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/28 17:00:53 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s, const char *find)
{
	size_t	i;
	size_t	j;
	size_t	buf;

	i = 0;
	if (find[0] == '\0')
		return ((char *)s);
	j = 0;
	while (s[i])
	{
		buf = i;
		while (find[j] == s[i])
		{
			if (s[i] == '\0')
				return ((char *)&s[buf]);
			j++;
			i++;
		}
		if (find[j] == '\0')
			return ((char *)&s[buf]);
		j = 0;
		i = buf;
		i++;
	}
	return (NULL);
}
