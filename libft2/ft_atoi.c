/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:18:22 by clau              #+#    #+#             */
/*   Updated: 2021/09/21 16:15:30 by clau             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_overflow(int n1, int n2);

int	ft_atoi(const char *str)
{
	int	is_neg;
	int	num;

	is_neg = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		is_neg = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (ft_overflow(num *is_neg, is_neg * (*str - '0')))
			return (0);
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * is_neg);
}

static int	ft_overflow(int n1, int n2)
{
	int	sum;

	if ((n1 > 0 && n1 * 10 < 0) || (n1 < 0 && n1 * 10 > 0))
		return (1);
	sum = (n1 * 10) + n2;
	if (n1 > 0 && n2 > 0 && sum < 0)
		return (1);
	else if (n1 < 0 && n2 < 0 && sum > 0)
		return (1);
	return (0);
}
