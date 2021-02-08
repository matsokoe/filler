/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:30:21 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/29 16:59:26 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

	if (s == NULL)
		return (0);
	start = 0;
	end = ft_strlen(s) - 1;
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t') &&
		s[start])
		start++;
	if (s[start] == '\0')
		return ("\0");
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t') && end > start)
		end--;
	return (ft_strsub(s, start, (end - start) + 1));
}
