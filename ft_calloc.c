/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboriske <aboriske@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 17:15:50 by aboriske          #+#    #+#             */
/*   Updated: 2026/11/07 17:55:45 by aboriske         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	char		*ptr;
	size_t		i;

	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < (num * size))
	{
		ptr[i] = '\0';
		i++;
	}
	return ((void *)ptr);
}
