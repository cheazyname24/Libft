/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboriske <aboriske@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:27:07 by aboriske          #+#    #+#             */
/*   Updated: 2026/11/06 16:02:38 by aboriske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*chr;

	i = 0;
	chr = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			chr = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		chr = (char *)&s[i];
	return (chr);
}
