/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:13:04 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/24 10:22:38 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	buf;

	i = 0;
	if (s[0] == '\0')
		return (NULL);
	if (find[0] == '\0')
		return ((char *)s);
	while (s[i] && s[i] != find[0] && i <= len)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	buf = i;
	j = 0;
	while (s[i++] == find[j++] && i <= len)
		if (find[j] == '\0')
			return ((char *)&s[buf]);
	return (NULL);
}
