/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboriske <aboriske@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:36:31 by aboriske          #+#    #+#             */
/*   Updated: 2026/11/09 16:10:01 by aboriske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	count_words(char const *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == sep && str[i - 1] != sep)
			count++;
		i++;
	}
	if (i > 0 && str[i - 1] != sep)
		count++;
	if (!sep)
		count = 1;
	return (count);
}

static char	*dup(char const *str, char sep)
{
	int		i;
	char	*dup;

	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != sep)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	**ft_split(char const *str, char sep)
{
	int		i;
	int		j;
	char	**array;

	if (!str)
		return (NULL);
	array = malloc(sizeof(char *) * (count_words(str, sep) + 1));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (str[j])
	{
		while (str[j] && str[j] == sep)
			j++;
		if (str[j])
		{
			array[i] = dup(&str[j], sep);
			i++;
			while (str[j] && str[j] != sep)
				j++;
		}
	}
	array[i] = NULL;
	return (array);
}
