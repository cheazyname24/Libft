/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboriske <aboriske@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 12:32:59 by aboriske          #+#    #+#             */
/*   Updated: 2026/11/09 14:28:26 by aboriske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

static int	issep(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trim;

	len = ft_strlen(s1);
	i = 0;
	while (issep(s1[i], set))
		i++;
	start = i;
	while (issep(s1[len - 1], set))
		len--;
	end = len;
	trim = malloc(sizeof(char) * ((end - start) + 1));
	ft_strlcpy(trim, &s1[start], (end - start));
	return (trim);
}
