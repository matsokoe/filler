/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:28:38 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/29 09:46:55 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	i = 0;
	str = NULL;
	if (s && f)
	{
		str = ft_strnew(ft_strlen(s));
		if (str == NULL)
			return (NULL);
		while (s[i])
		{
			str[i] = (*f)(i, s[i]);
			i++;
		}
	}
	return (str);
}
