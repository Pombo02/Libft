/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anados-s <anados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:01:42 by anados-s          #+#    #+#             */
/*   Updated: 2023/04/19 19:01:42 by anados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;
	size_t			i;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	i = 0;
	if (source == destination)
		return (dest);
	if (source > destination)
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else
	{
		while (n--)
			destination[n] = source[n];
	}
	return (dest);
}
