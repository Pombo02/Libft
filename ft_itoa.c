/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anados-s <anados-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:28:43 by anados-s          #+#    #+#             */
/*   Updated: 2023/04/19 19:28:43 by anados-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	intlen(long numb)
{
	int		len;

	len = 0;
	if (numb == 0)
		return (1);
	if (numb < 0)
	{
		len++;
		numb *= -1;
	}
	while (numb > 0)
	{
		len++;
		numb /= 10;
	}
	return (len);
}

void	convert(char *str, int len, long num)
{
	while (num > 0)
	{
		str[len] = 48 + (num % 10);
		num /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;

	num = n;
	len = intlen(num);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len--] = 0;
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	if (num == 0)
	{
		str[0] = 48;
		return (str);
	}
	convert(str, len, num);
	return (str);
}
