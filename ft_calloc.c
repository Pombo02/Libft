/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anados-s <anados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 17:31:58 by anados-s          #+#    #+#             */
/*   Updated: 2023/04/19 18:44:53 by anados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;
	int		i;

	dest = malloc(count * size);
	i = count * size;
	if (!dest)
		return (NULL);
	ft_memset(dest, '\0', i);
	return (dest);
}
