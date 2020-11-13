/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iadzuki <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 12:34:12 by iadzuki           #+#    #+#             */
/*   Updated: 2020/11/04 12:27:46 by iadzuki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_copy;
	unsigned char	*src_copy;

	if (!dest && !src)
		return (NULL);
	dest_copy = (unsigned char *)dest;
	src_copy = (unsigned char *)src;
	while (n--)
		*dest_copy++ = *src_copy++;
	return (dest);
}
