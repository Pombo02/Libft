/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anados-s <anados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 18:15:20 by anados-s          #+#    #+#             */
/*   Updated: 2023/04/19 18:15:20 by anados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i])
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
