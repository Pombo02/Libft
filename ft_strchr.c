/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anados-s <anados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:25:46 by anados-s          #+#    #+#             */
/*   Updated: 2023/04/11 14:25:46 by anados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	a;

	a = c;
	while (*str != '\0' && *str != a)
	{
		str++;
	}
	if (*str == a)
	{
		return ((char *)str);
	}
	return (0);
}
