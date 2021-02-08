/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matsokoe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/16 16:30:33 by matsokoe          #+#    #+#             */
/*   Updated: 2019/06/12 16:19:47 by matsokoe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;
	short	testeur;

	testeur = 0;
	count = 0;
	i = 0;
	while (s && s[i] != '\0')
	{
		if (s[i] != c && testeur == 0)
		{
			count++;
			testeur = 1;
		}
		if (s[i] == c && testeur == 1)
			testeur = 0;
		i++;
	}
	return (count);
}

static int			ft_word_len(char const *s, size_t index, char c)
{
	size_t	count;

	count = 0;
	while (s[index] != c && s[index] != '\0')
	{
		index++;
		count++;
	}
	return (count);
}

static char			**ft_splitfree(char **tab, int index)
{
	while (index >= 0)
	{
		free(tab[index]);
		index--;
	}
	return (NULL);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**tab;

	i = 0;
	k = 0;
	j = 0;
	if ((tab = (char **)malloc(sizeof(char *) * ft_count_word(s, c)
					+ 1)) == NULL)
		return (NULL);
	while (i < ft_count_word(s, c))
	{
		while (s[j] == c)
			j++;
		tab[i] = ft_strsub(s, j, ft_word_len(s, j, c));
		if (tab[i] == NULL)
			return (ft_splitfree(tab, i));
		while (s[j] != c && s[j] != '\0')
			j++;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
