/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboriske <aboriske@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:27:46 by aboriske          #+#    #+#             */
/*   Updated: 2026/11/09 12:22:25 by aboriske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *str);

void	*ft_memcpy(void *dst, const void *src, size_t n);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	tlen;
	size_t	len1;
	size_t	len2;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	tlen = len1 + len2;
	join = malloc(tlen + 1);
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, len1);
	ft_memcpy(&join[len1], s2, len2);
	join[tlen] = '\0';
	return (join);
}
