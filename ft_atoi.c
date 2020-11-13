/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:32:56 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/10 14:48:13 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	minus;
	int	num_count;

	minus = 0;
	res = 0;
	num_count = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\r' || \
		*str == '\v' || *str == '\f')
		++str;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			++minus;
	while (*str >= '0' && *str <= '9')
	{
		if (res != 0 && ++num_count > 19)
			return (minus ? 0 : -1);
		res = res * 10 + *str++ - '0';
	}
	return (minus ? -res : res);
}
