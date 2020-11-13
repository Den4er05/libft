/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:58:18 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/04 12:01:28 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	dest_copy = (unsigned char *)dest;
	src_copy = (unsigned char *)src;
	while (n--)
	{
		if ((*dest_copy++ = *src_copy++) == (unsigned char)c)
			return (dest_copy);
	}
	return (NULL);
}
