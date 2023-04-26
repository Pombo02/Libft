/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anados-s <anados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 18:51:06 by anados-s          #+#    #+#             */
/*   Updated: 2023/04/19 17:51:34 by anados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*new;
	size_t	start;
	size_t	end;

	i = 0;
	if (!s1)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	start = i;
	i = ft_strlen(s1);
	while (i > start && ft_strchr(set, s1[i - 1]))
		i--;
	end = i;
	new = ft_substr(s1, start, end - start);
	return (new);
}
