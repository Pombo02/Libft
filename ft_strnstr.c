/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anados-s <anados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:48:44 by anados-s          #+#    #+#             */
/*   Updated: 2023/04/19 17:41:11 by anados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	b = 0;
	l = 0;
	if (!little && !big)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	while (big[b] && b < len)
	{
		l = 0;
		while (big[b + l] == little[l] && little[l] != '\0' && b + l < len)
		{
			l++;
		}
		if (!little[l])
			return ((char *)big + b);
		b++;
	}
	return (NULL);
}
