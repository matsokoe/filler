/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:32:08 by matsokoe          #+#    #+#             */
/*   Updated: 2019/05/29 11:03:18 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(const char *s, int fd)
{
	char	*buf_s;
	int		i;

	buf_s = (char *)s;
	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &buf_s[i], 1);
			i++;
		}
	}
}