/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anados-s <anados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 17:04:03 by anados-s          #+#    #+#             */
/*   Updated: 2023/04/19 17:51:33 by anados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
	{
		sub = malloc(1);
		*sub = '\0';
		return (sub);
	}
	if (ft_strlen(s) - start >= len)
		sub = (char *)malloc(sizeof(char) * len + 1);
	else
		sub = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	if (!sub)
		return (NULL);
	while (s[start] != '\0' && i < len && start < ft_strlen(s))
	{
		sub[i] = s[start++];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
