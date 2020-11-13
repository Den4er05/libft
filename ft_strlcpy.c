/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:30:22 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/10 14:56:42 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	idx;

	if (!dest || !src)
		return (0);
	if (dstsize > 0)
	{
		idx = -1;
		while (++idx < dstsize - 1)
		{
			if ((dest[idx] = src[idx]) == '\0')
				break ;
		}
		dest[idx] = '\0';
	}
	return (ft_strlen(src));
}
