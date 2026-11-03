/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboriske <aboriske@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:07:27 by aboriske          #+#    #+#             */
/*   Updated: 2026/11/03 17:34:47 by aboriske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memcpy(void *d, const void *s, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*src;

	if (!d && !s)
		return NULL;
	dst = (char *)d;
	src = (const char *)s;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (d);
}
