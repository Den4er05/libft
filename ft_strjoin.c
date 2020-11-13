/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:22:00 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/10 15:21:54 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	size_t	idx_1;
	size_t	idx_2;

	if (!(res = malloc(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
	idx_1 = -1;
	while (++idx_1 < ft_strlen(s1))
		res[idx_1] = s1[idx_1];
	idx_2 = -1;
	while (++idx_2 < ft_strlen(s2))
		res[idx_1++] = s2[idx_2];
	res[idx_1] = '\0';
	return ((char *)res);
}
