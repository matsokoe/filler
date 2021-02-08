/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:30:57 by matsokoe          #+#    #+#             */
/*   Updated: 2019/06/12 14:26:17 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len_nb(int n)
{
	unsigned int	size;

	size = 0;
	if (n <= 0)
	{
		size++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*str;
	int				len;

	nbr = n;
	len = len_nb(nbr);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		nbr = -nbr;
	while (len >= 0)
	{
		len--;
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
