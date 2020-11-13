/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:25:13 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/10 14:57:02 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	int		idx;
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	idx = -1;
	while (++idx < (int)dstsize - (int)dest_len - 1 && src[idx])
	{
		dest[dest_len + idx] = src[idx];
	}
	dest[dest_len + idx] = '\0';
	return (ft_strlen(src) + ((dstsize > dest_len ? dest_len : dstsize)));
}
