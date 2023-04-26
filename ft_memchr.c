/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anados-s <anados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:25:16 by anados-s          #+#    #+#             */
/*   Updated: 2023/04/11 14:25:16 by anados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*source;
	size_t			i;

	source = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(str + i) == (unsigned char)c)
			return (source + i);
		i++;
	}
	return (0);
}
