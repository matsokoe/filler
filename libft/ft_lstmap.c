/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:00:50 by matsokoe          #+#    #+#             */
/*   Updated: 2019/06/12 17:48:54 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*prem;

	if (lst && f)
	{
		prem = NULL;
		new = f(lst);
		prem = new;
		while (lst->next != NULL)
		{
			new->next = f(lst->next);
			new = new->next;
			lst = lst->next;
		}
		return (prem);
	}
	return (NULL);
}
