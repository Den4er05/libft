/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:08:31 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/04 15:12:01 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		len;

	len = 1;
	while (n /= 10)
		++len;
	return (len);
}

char		*ft_itoa(int n)
{
	int		digits;
	char	*res;

	digits = ft_intlen(n) + (n < 0);
	if (!(res = (char *)malloc(digits + 1)))
		return (NULL);
	if (n < 0)
		res[0] = '-';
	if (!n)
		res[0] = '0';
	res[digits] = '\0';
	while (n)
	{
		res[--digits] = n % 10 * (n < 0 ? -1 : 1) + '0';
		n /= 10;
	}
	return (res);
}
